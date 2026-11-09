/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 12:28:07 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/11/09 13:25:27 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static void	put_ptr(uintptr_t num)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		put_ptr(num / 16);
		put_ptr(num % 16);
	}
	else
		write(1, &base[num], 1);
}
int	print_ptr(void *ptr)
{
	uintptr_t	address;
	int			count;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	address = (uintptr_t)ptr;
	count = write(1, "0x", 2);
	put_ptr(address);
	count += ptr_len(address);
	return (count);
}