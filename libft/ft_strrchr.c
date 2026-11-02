/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:30:30 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/14 13:38:41 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len > 0 && s[len] != (char) c)
		len--;
	if (s[len] == (char) c)
		return ((char *)s + len);
	return (NULL);
}
/*
int main()
{
	char str[]="GeeksforGeeks";
	printf("%s",ft_strrchr(str,'k'));
}*/
