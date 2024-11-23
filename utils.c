/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:06:29 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 16:02:26 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putubr(unsigned int n, int count)
{
	char	digit;

	if (n >= 10)
	{
		count = ft_putubr(n / 10, count);
		if (count == -1)
			return (-1);
		count = ft_putubr(n % 10, count);
		if (count == -1)
			return (-1);
	}
	else
	{
		digit = n + '0';
		if (safe_write(&digit, 1, &count) == -1)
			return (-1);
	}
	return (count);
}

int	ft_puthex(char *base, unsigned long n, int count)
{
	if (n >= 16)
		count = ft_puthex(base, n / 16, count);
	if (safe_write(&base[n % 16], 1, &count) == -1)
		return (-1);
	return (count);
}

int	decimal_to_hex(char *base, unsigned int num)
{
	char	hex[20];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (num == 0)
	{
		if (safe_write("0", 1, &count) == -1)
			return (-1);
		return (count);
	}
	while (num > 0)
	{
		hex[i] = base[num % 16];
		num /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		if (safe_write(&hex[i], 1, &count) == -1)
			return (-1);
	}
	return (count);
}
