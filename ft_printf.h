/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:08:55 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/08 17:46:15 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

/*
	for testing!
*/
# include <stdio.h>

# define SPECIFIERS 8

int		count_arg_in_s(const char *s);
int		is_valid_specifier(const char c);
int		ft_is_specifier(const char *s, int index, char c);
int		ft_putlstr(const char *str);
void	ft_printf_int(va_list **args, int *count);
void	ft_printf_char(va_list **args);
void	ft_printf_str(va_list **args);
int		ft_printf(const char *s, ...);

#endif