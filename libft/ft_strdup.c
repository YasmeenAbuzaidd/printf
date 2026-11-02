/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:20:42 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/09/27 13:52:52 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*c;

	len = ft_strlen(s);
	c = malloc(len + 1);
	if (c == NULL)
		return (NULL);
	ft_memcpy(c, s, len);
	c[len] = '\0';
	return (c);
}
/*
int main()
{
    char source[14] = "GeeksForGeeks";
    char *target = ft_strdup(source); 
    printf("%s", target);
}*/
