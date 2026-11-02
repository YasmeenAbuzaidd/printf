/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 21:06:32 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/01 16:23:46 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	while (str[i])
	{
		flag = 1;
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
		{
			i++;
			if (flag)
			{
				count++;
				flag = 0;
			}
		}
	}
	return (count);
}

static char	*fill_word(char const *str, char c, int begin, char *word)
{
	int	j;

	j = 0;
	while (str[begin] && str[begin] != c)
	{
		word[j] = str[begin];
		begin++;
		j++;
	}
	word[j] = 0;
	return (word);
}

static char	*get_word(char const *str, char c, size_t *start)
{
	int		i;
	int		len;
	int		begin;
	char	*word;

	i = 0;
	begin = -1;
	len = 0;
	while (str[*start + i] && str[*start + i] == c)
		i++;
	while (str[*start + i] && str[*start + i] != c)
	{
		if (begin == -1)
			begin = *start + i;
		i++;
		len++;
	}
	while (str[*start + i] && str[*start + i] == c)
		i++;
	*start += i;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	return (fill_word(str, c, begin, word));
}

static void	ft_free(char **res, size_t i)
{
	while (i)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	start;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	count = count_words(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < count)
	{
		result[i] = get_word(s, c, &start);
		if (!result[i])
		{
			ft_free(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
 	char	**result;
	char	str[]="Hi Yasmeen Abuzaid";
 	int		i;
 	result = ft_split(str, ' ');
 	i = 0;
 	while (result[i])
 	{
 		printf("%s\n", result[i]);
		i++; 	
 		}
}*/
