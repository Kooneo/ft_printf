/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:03:28 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/22 16:13:40 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)dst;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
