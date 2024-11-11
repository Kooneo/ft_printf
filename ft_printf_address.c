/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:45:14 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/11 21:49:14 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_address(va_list **args)
{
	int *address;

	address = va_arg(**args, int *);
	ft_putstr_fd(&address, 1);
}