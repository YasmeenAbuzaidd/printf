/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzaid <yabuzaid@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:18:30 by yabuzaid          #+#    #+#             */
/*   Updated: 2026/10/26 14:18:30 by yabuzaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
char    *ft_hex(unsigned int num, char type);
int	print_ptr(void *ptr);
char	*ft_utoa(unsigned int n);

#endif