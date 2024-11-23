/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:16:28 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 16:01:26 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>

int	safe_write(const char *str, int len, int *count);
int	ft_putnbr(int n, int count);
int	ft_printf(const char *s, ...);
int	handle_format(char specifier, va_list args);
int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_pointer(va_list args);
int	handle_integer(va_list args);
int	handle_unsigned(va_list args);
int	handle_hex(va_list args, int uppercase);
int	handle_percent(void);
int	ft_putubr(unsigned int n, int count);
int	ft_putnbr(int n, int count);
int	ft_puthex(char *base, unsigned long n, int count);
int	decimal_to_hex(char *base, unsigned int num);
#endif