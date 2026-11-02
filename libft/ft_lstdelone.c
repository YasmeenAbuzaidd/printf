/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/02 19:57:16 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 20:08:04 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
free(content);
}

int	main(void)
{
t_list	*a;
t_list	*b;
char	*str;

str = malloc(6);
if (!str)
return (1);
str[0] = 'H';
str[1] = 'e';
str[2] = 'l';
str[3] = 'l';
str[4] = 'o';
str[5] = '\0';
a = ft_lstnew(str);
b = ft_lstnew("Yasmeen");
a->next = b;
ft_lstdelone(a, del);
printf("Next node: %s\n", (char *) b->content);
free(b);
return (0);
}
*/
