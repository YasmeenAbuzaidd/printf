/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:51:37 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/10 11:43:33 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (set[i])
	{
		if (set[i] == c)
			flag = 1;
		i++;
	}
	return (flag);
}

static int	start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_set(set, str[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	end(char const *str, char const *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (is_set(set, str[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		begin;
	int		rbegin;
	int		total_len;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	begin = start(s1, set);
	rbegin = end(s1, set);
	if (begin > rbegin)
		return (ft_strdup(""));
	total_len = rbegin - begin + 1;
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	while (begin <= rbegin)
		str[i++] = s1[begin++];
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[1000] = "UJAZ";
	char	s[100] = "JAZ";

	printf("%s\n", ft_strtrim(str, NULL));
}
// HI MY NAME IS HI
*/