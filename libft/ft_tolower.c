/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:35:39 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/03 21:18:59 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int num)
{
	if (num >= 'A' && num <= 'Z')
		return (num + 32);
	else
		return (num);
}
/*
int main()
{
	printf("%c",ft_tolower('A'));
}*/
