/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/02 20:12:32 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 20:28:22 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
#include <stdio.h>

void	del(void *content)
{
free(content);
}

int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;
char	*s1;
char	*s2;
char	*s3;

s1 = malloc(2);
s2 = malloc(2);
s3 = malloc(2);
if (!s1 || !s2 || !s3)
return (1);
s1[0] = 'A';
s1[1] = '\0';
s2[0] = 'B';
s2[1] = '\0';
s3[0] = 'C';
s3[1] = '\0';
a = ft_lstnew("Hello");
b = ft_lstnew(s2);
c = ft_lstnew(s3);
a->next = b;
b->next = c;
printf("Before: %s -> %s -> %s\n",
(char *) a->content,
(char *) a->next->content,
(char *) a->next->next->content);
ft_lstclear(&a, del);
printf("After: %p\n", (void *) a);
return (0);
}
*/
