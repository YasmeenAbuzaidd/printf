/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 14:00:58 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 23:54:13 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	num;

	num = 0;
	while (str[num])
		num++;
	return (num);
}
/*
int main()
{
printf("%zu\n", ft_strlen("ABCDEF"));
}*/
