/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:34:44 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/19 09:28:20 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	unsigned int	len;
	t_list			*new;
	t_list			*new_list;
	void			*content;

	if (!lst || !f || !del)
		return (NULL);
	len = ft_lstsize(lst);
	new_list = NULL;
	while (len--)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

void	*hi(void *content)
{
	return("Hi");
}

void del(void *content)
{
    free(content);
}

int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;
t_list	*new_list;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
c = ft_lstnew("Jasmine");
a->next = b;
b->next = c;
new_list = ft_lstmap(a, hi, del);
printf("Original:\n");
printf("%s\n", (char *) a->content);
printf("%s\n", (char *) a->next->content);
printf("%s\n", (char *) a->next->next->content);
printf("\nNew:\n");
printf("%s\n", (char *) new_list->content);
printf("%s\n", (char *) new_list->next->content);
printf("%s\n", (char *) new_list->next->next->content);
free(new_list->next->next);
free(new_list->next);
free(new_list);
free(c);
free(b);
free(a);
return (0);
}
*/