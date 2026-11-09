/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:04:41 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/11/09 13:23:52 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_length(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 16;
		len++;
	}
	return (len);
}

char	*ft_hex(unsigned int num, char type)
{
	char	*str;
	char	*base;
	int		len;

	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = hex_length(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[num % 16];
		num /= 16;
	}
	return (str);
}
