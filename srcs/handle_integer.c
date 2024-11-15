/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:37:32 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/13 20:24:23 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	handle_integer(va_list args)
{
	int	i;

	i = va_arg(args, int);
	return (ft_putnbr(i, 0));
}
