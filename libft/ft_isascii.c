/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 13:31:21 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 23:49:34 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
printf("%d\n", ft_isascii(0));
printf("%d\n", ft_isascii(65));
printf("%d\n", ft_isascii(127));
printf("%d\n", ft_isascii(128));
printf("%d\n", ft_isascii(-1));
printf("%d\n", ft_isascii(200));
}
*/
