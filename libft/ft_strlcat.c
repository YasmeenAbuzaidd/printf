/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:54:43 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/14 14:44:47 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len1;
	size_t	len2;
	size_t	length;
	size_t	total_length;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	length = len2;
	if (size >= len1)
		total_length = len1 + len2;
	else
		total_length = size + len2;
	len2 = 0;
	if (len1 < size)
	{
		while (length-- && len1 < size - 1)
		{
			dst[len1] = src[len2];
			len1++;
			len2++;
		}
		dst[len1] = '\0';
	}
	return (total_length);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
const char	source[7];
char		destination[10];
const char	sourc[7] = "abcdef";
char		destinatio[] = "marah";

printf("%zu\n", ft_strlcat(destinatio, sourc, 5));
printf("%s", destinatio);
//printf("%zu\n", strlcat(destinatio, sourc, 5));
 //printf("%s", destinatio);
}
*/