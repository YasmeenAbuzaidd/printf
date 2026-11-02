/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 14:25:42 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 22:03:19 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	total;

	total = size * nmemb;
	if (!nmemb || !size)
	{
		arr = malloc(1);
		if (!arr)
			return (NULL);
		return (arr);
	}
	if (total / nmemb != size || total / size != nmemb)
		return (NULL);
	arr = malloc(total);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total);
	return (arr);
}
/*
int	main(void)
{
int	*arr;
int	i;

arr = ft_calloc(5, sizeof(int));
if (!arr)
return (1);
i = 0;
while (i < 5)
{
printf("%d ", arr[i]);
i++;
}
free(arr);
}
*/
