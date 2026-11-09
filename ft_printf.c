/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:19:40 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/11/09 14:22:14 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static	void	char_fun(char c)
{
	write(1, &c, 1);
}

static	int	string_fun(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[i])
	{
		char_fun(c[i]);
		i++;
	}
	return (i);
}

static	int	ft_type(va_list args, char type)
{
	char	*str;
	int		num;

	if (type == 'c')
	{
		char_fun(va_arg(args, int));
		return (1);
	}
	else if (type == 's')
		return (string_fun(va_arg(args, char *)));
	else if (type == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (type == 'd' || type == 'i')
	{
		str = ft_itoa(va_arg(args, int));
		num = string_fun(str);
		free(str);
		return (num);
	}
	else if (type == 'u')
		return (print_unsigned(args));
	else if (type == 'x' || type == 'X')
		return (print_hex(args, type));
	return (0);
}

static int	ft_check(const char *str, int *i, va_list args)
{
	int	count;

	count = 0;
	(*i)++;
	if (str[*i] == '\0')
		return (0);
	if (str[*i] == '%')
		count = write(1, "%", 1);
	else
		count = ft_type(args, str[*i]);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_check(str, &i, args);
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
    int result;

    result = ft_printf("I got 100%%");;
    printf("\nReturn: %d\n", result);
    return (0);
}*/
