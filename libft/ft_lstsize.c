/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:02:42 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/14 14:25:40 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	i++;
	return (i);
}
/*
int	main(void)
{
t_list	*a;
t_list	*b;
t_list	*c;

a = ft_lstnew("Hello");
b = ft_lstnew("Yasmeen");
c = ft_lstnew("Jasmine");
printf("Empty list: %u\n", ft_lstsize(NULL));
printf("One node: %u\n", ft_lstsize(a));
a->next = b;
printf("Two nodes: %u\n", ft_lstsize(a));
b->next = c;
printf("Three nodes: %u\n", ft_lstsize(a));
free(c);
free(b);
free(a);
return (0);
}
*/
