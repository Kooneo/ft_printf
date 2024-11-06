/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:45:45 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/06 20:45:56 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_specifier(const char *s, int index, char c)
{
	return (s[index + 1] == (char)c);
}