/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:28:57 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/19 10:29:24 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
ft_lstadd_front(&b, a);
c = ft_lstnew("Jasmine");
ft_lstadd_front(&b, c);
printf("%s\n", (char *) b->content);
printf("%s\n", (char *) b->next->content);
printf("%s\n", (char *) b->next->next->content);
free(a);
free(b);
free(c);
return (0);
}
*/