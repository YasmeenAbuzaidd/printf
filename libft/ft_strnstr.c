/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 16:34:23 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/13 07:42:52 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	size_t	count;
	size_t	inner_count;

	llen = 0;
	count = 0;
	inner_count = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (little[llen])
		llen++;
	while (big[count] && len > count)
	{
		while (count + inner_count < len && big[count + inner_count]
			&& little[inner_count]
			&& big[count + inner_count] == little[inner_count])
			inner_count++;
		if (inner_count == llen)
			return ((char *)(big + count));
		count++;
		inner_count = 0;
	}
	return (NULL);
}
/*
int main()
{
const char largestring[12] = "Foo Bar Baz";
const char smallstring[4] = "Bar";
printf("%s",ft_strnstr(largestring, smallstring, 17));
}*/
