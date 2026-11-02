/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:43:36 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/17 10:00:40 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*srcc;
	char		*destt;
	size_t		i;

	i = 0;
	destt = (char *) dest;
	srcc = (const char *) src;
	if (destt <= srcc)
	{
		while (i < n)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			destt[n] = srcc[n];
	}
	return (dest);
}
/*
int main()
{
char str[]="1234567890";
char ss[]="1234567890";
printf("%s\n",ft_memmove(str+2,str,5));
printf("%s", memmove(ss+2,ss,5));
}*/