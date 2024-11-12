/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:57:52 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/12 16:57:53 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_printf_char(va_list **args)
{
	char	c;

	c = (char )va_arg(**args, int);
	ft_putchar_fd(c, 1);
}
