/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 15:11:54 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/13 02:02:15 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*news;

	i = 0;
	news = (char *) s;
	while (i < n && (unsigned char) news[i] != (unsigned char) c)
		i++;
	if (i < n)
		return ((void *)((char *) s + i));
	return (NULL);
}
/*
int main() {
char myStr[13] = "Hello World!";
char *myPtr = (char*)ft_memchr(myStr, 'o', 12);
printf("%s", myPtr);
return 0;
}*/
