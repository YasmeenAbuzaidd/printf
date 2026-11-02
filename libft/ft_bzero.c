/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/25 11:02:41 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/03 02:19:52 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = 0;
		i++;
	}
}
/*int	main(void)
{
char	str[8];

str[0] = 'Y';
str[1] = 'a';
str[2] = 's';
str[3] = 'm';
str[4] = 'e';
str[5] = 'e';
str[6] = 'n';
str[7] = '\0';
ft_bzero(str, 3);
printf("%s", str);
}
*/
