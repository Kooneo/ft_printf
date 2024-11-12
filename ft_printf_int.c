/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:57:46 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/12 17:41:53 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static size_t	ft_intlen(int n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (n == 0)
// 		return (1);
// 	if (n == 2147483647)
// 		return (10);
// 	if (n == -2147483648)
// 		return (11);
// 	if (n < 0)
// 	{
// 		n = -n;
// 		i++;
// 	}
// 	while (n > 0)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

void	ft_printf_int(va_list **args)
{
	int i;

	i = va_arg(**args, int);
	if (i) {
		ft_putnbr_fd(i, 1);
	}
}