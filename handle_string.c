/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:39:36 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/24 17:16:28 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	len = ft_strlen(str);
	return (write(1, str, len));
}
