/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:50:34 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/13 20:24:47 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_unsigned(va_list args)
{
	unsigned int	i;

	i = va_arg(args, unsigned int);
	return (ft_putubr(i, 0));
}
