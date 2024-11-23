/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:31:19 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 16:02:12 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	int			i;
	void		*p;
	short		is_fail;
	uintptr_t	address;

	i = 0;
	is_fail = 0;
	p = va_arg(args, void *);
	address = (uintptr_t)p;

	if(safe_write("0x", 2, &i) == -1)
		return (-1);

	is_fail = ft_puthex("0123456789abcdef", address, 0);
	if (is_fail == -1)
		return (-1);
	else
		i += is_fail;
	return (i);
}
