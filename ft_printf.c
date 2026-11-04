/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:19:40 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/26 14:19:40 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void    print_fun(char c)
{
    write(1, &c, 1);
}
int    string_fun(char *c)
{
    int i;

    i = 0;
    if (c == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (c[i])
    {
        print_fun(c[i]);
        i++;
    }
    return (i);
}
int ft_type(va_list args, char type)
{
    char    *str;
    int     num;
    int     hex;

    if (type == 'c')
    {
        print_fun(va_arg(args ,int));
        return (1);
    }
    else if (type == 's')
        return (string_fun(va_arg(args ,char *)));
    else if (type == 'd' || type == 'i')
    {
        str = ft_itoa(va_arg(args,int));
        num = string_fun(str);
        free(str);
        return (num);
    }
    else if (type == 'u')
    {
        str = ft_utoa(va_arg(args,unsigned int));
        num = string_fun(str);
        free(str);
        return (num);
    }
    else if (type == 'x')
    {
        hex = ft_hex(va_arg(args,unsigned int));
    }
    return (0);
}

int ft_printf(const char *str, ...)
{
    int i;
    int count;
    va_list args;

    i = 0;
    count = 0;
    va_start(args,str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == '%')
            {
                write(1, "%", 1);
                count++;
            }
            else
                count += ft_type(args,str[i]);
        }
        else
        {
            count++;
            write(1, &str[i], 1);
        }
        i++;
    }
    va_end(args);
    return (count);
}
#include <stdio.h>
int main(void)
{
    int result;

    result = ft_printf("I got 100%%");;
    printf("\nReturn: %d\n", result);
    return (0);
}