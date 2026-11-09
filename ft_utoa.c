/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:04:22 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/11/03 17:04:22 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdlib.h>

static int	length(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_utoa(unsigned int n)
{
	int				len;
	unsigned int	num;
	char			*s;

	num = n;
	len = length(n);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while (len--)
	{
		s[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}

int	print_unsigned(va_list args)
{
	char	*str;
	int		count;

	str = ft_utoa(va_arg(args, unsigned int));
	if (!str)
		return (-1);
	count = write(1, str, ft_strlen(str));
	free(str);
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
printf("%s\n", ft_utoa(4294967295));
printf("%s\n", ft_utoa(0));
printf("%s", ft_utoa(1234));
}
*/