/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:42:10 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/19 10:28:36 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
# include < stdio.h >

int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
c = ft_lstnew("Jasmine");
ft_lstadd_back(&a, b);
ft_lstadd_back(&a, c);
printf("%s\n", (char *) a->content);
printf("%s\n", (char *) a->next->content);
printf("%s\n", (char *) a->next->next->content);
free(c);
free(b);
free(a);
return (0);
}
*/
