/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:31:19 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 18:19:41 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	int			count;
	void		*p;
	uintptr_t	address;

	count = 0;
	p = va_arg(args, void *);
	address = (uintptr_t)p;
	if (safe_write("0x", 2, &count) == -1)
		return (-1);
	if (ft_puthex("0123456789abcdef", address, &count) == -1)
		return (-1);
	return (count);
}
