/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:22:07 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/19 09:43:49 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	res;
	int		i;
	int		sign;

	res = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("-2147483648"));
printf("%d\n", ft_atoi("-42"));
printf("%d\n", ft_atoi("+42"));
printf("%d\n", ft_atoi("   123"));
printf("%d\n", ft_atoi("\t\n  56"));
printf("%d\n", ft_atoi("42abc"));
printf("%d\n", ft_atoi("abc42"));
printf("%d\n", ft_atoi("--42"));
printf("%d\n", ft_atoi("+-42"));
printf("%d\n", ft_atoi("  -123abc"));
printf("%d\n", ft_atoi("0"));
printf("%d\n", ft_atoi(""));
printf("%d\n", ft_atoi("   "));
printf("%d\n", ft_atoi("+"));
printf("%d\n", ft_atoi("-"));
printf("%d\n", ft_atoi("214"));
printf("%d\n", ft_atoi("12 34"));
printf("%d\n", ft_atoi("00042"));
}*/