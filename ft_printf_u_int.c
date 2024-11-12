/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:25:11 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/12 21:30:07 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putubr_fd(int n, int fd)
{
	if (n < 0)
		n = -n;

	if (n >= 10)
	{
		ft_putubr_fd(n / 10, fd);
		ft_putubr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);

}

void	ft_printf_u_int(va_list **args)
{
	unsigned int i;

	i = va_arg(**args, int);
	ft_putubr_fd(i, 1);
}