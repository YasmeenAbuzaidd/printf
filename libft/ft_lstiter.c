/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yabuzaid <yabuzaid@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/02 20:29:03 by yabuzaid         #+#    #+#              */
/*   Updated: 2026/10/02 20:33:06 by yabuzaid        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	print_content(void *content)
{
printf("%s\n", (char *) content);
}

int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
c = ft_lstnew("Jasmine");
a->next = b;
b->next = c;
ft_lstiter(a, print_content);
free(c);
free(b);
free(a);
return (0);
}
*/
