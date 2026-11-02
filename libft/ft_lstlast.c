/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/02 14:28:39 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 14:36:25 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*

int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;
t_list	*last;

printf("Empty list:\n");
last = ft_lstlast(NULL);
printf("%p\n\n", (void *) last);
a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
c = ft_lstnew("Jasmine");
a->next = b;
b->next = c;
printf("List: %s -> %s -> %s\n",
(char *) a->content,
(char *) a->next->content,
(char *) a->next->next->content);
last = ft_lstlast(a);
printf("Last node: %s\n", (char *) last->content);
free(c);
free(b);
free(a);
return (0);
}
*/
