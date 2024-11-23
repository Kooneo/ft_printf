/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:37:00 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 16:01:51 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex(va_list args, int uppercase)
{
	char			*base;
	unsigned int	num;

	base = "0123456789abcdef";
	if (uppercase)
		base = "0123456789ABCDEF";
	num = va_arg(args, unsigned int);
	return (decimal_to_hex(base, num));
}
