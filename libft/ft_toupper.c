/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:24:56 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/03 21:19:10 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int num)
{
	if (num >= 'a' && num <= 'z')
		return (num - 32);
	else
		return (num);
}
/*
int main()
{
	char c =ft_toupper('a');
	printf("%c",c);
}*/
