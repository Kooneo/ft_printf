/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_arg_in_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:53:32 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/05 18:53:56 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_arg_in_s(const char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (count);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			count++;
		i++;
	}
	return (count);
}
