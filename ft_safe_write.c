/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:46:29 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 16:01:39 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	safe_write(const char *str, int len, int *count)
{
	int	result;

	result = write(1, str, len);
	if (result == -1)
		return (-1);
	*count += result;
	return (result);
}
