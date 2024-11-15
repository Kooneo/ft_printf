/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:18:07 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/14 15:48:43 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;
	short	is_fail;

	i = 0;
	count = 0;
	is_fail = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			is_fail = handle_format(s[++i], args);
			if (is_fail == -1)
				return (-1);
			else
				count += is_fail;
		}
		else if (safe_write(&s[i], 1, &count) == -1)
			return (-1);
		i++;
	}
	va_end(args);
	return (count);
}
