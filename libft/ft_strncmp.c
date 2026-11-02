/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:17:43 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/19 09:41:18 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;
	unsigned char	*s1l;
	unsigned char	*s2l;

	s1l = (unsigned char *) s1;
	s2l = (unsigned char *) s2;
	count = 0;
	while (count < n && (s1l[count] || s2l[count]))
	{
		if (s1l[count] - s2l[count])
			return ((s1l[count] - s2l[count]));
		count++;
	}
	return (0);
}
