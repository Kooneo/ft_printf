/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_specifier.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:55:24 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/05 18:55:44 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_valid_specifier(const char c)
{
	int i;
	const char specifiers[SPECIFIERS] = {'c', 's', 'p', 'd', 'i', 'u', 'x',
		'X'};

	i = 0;
	while (i < SPECIFIERS)
	{
		if (specifiers[i] == (const char)c)
			return (1);
		i++;
	}
	return (0);
}