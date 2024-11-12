/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:57:59 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/12 18:40:20 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// cput_char('\\');
// 			cput_char("0123456789abcdef"[(unsigned char) str[i] / 16]);
// 			cput_char("0123456789abcdef"[(unsigned char) str[i] % 16]);

static void	put_hex(unsigned long n)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (n >= 16)
	{
		put_hex(n / 16);
	}
	ft_putstr_fd(&hex_base[n % 16], 1);
}

void	ft_printf_address(va_list **args)
{
	void			*ptr;
	unsigned long	address;

	ptr = va_arg(**args, void *);
	address = (int)ptr;
	ft_putstr_fd("0x", 1);
	put_hex(address);
	ft_putstr_fd("\0", 1);
}
