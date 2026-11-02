/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 12:12:59 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 23:46:11 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
printf("%d\n", ft_isdigit('5'));
printf("%d\n", ft_isdigit('0'));
printf("%d\n", ft_isdigit('9'));
printf("%d\n", ft_isdigit('a'));
printf("%d\n", ft_isdigit('-'));
printf("%d\n", ft_isdigit(-5));
}
*/
