/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:10:42 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/06 20:51:22 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle(const char *str, int index, int argc, va_list *ar)
{
	if (argc)
	{
		if (ft_is_specifier(str, index, 'd'))
			ft_printf_int(&ar);
		//  adding more {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X'}
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	int		index;
	int		argc;
	va_list	*p;

	va_start(ar, s);
	index = 0;
	argc = count_arg_in_s(s);
	p = &ar;
	if (argc > 0)
	{
		while (s[index] != '\0')
		{
			if (s[index] != '%' && (s[index - 1] != '%'))
				ft_putchar_fd(s[index], 1);
			if (s[index] == '%' && is_valid_specifier(s[index + 1]))
				ft_handle(s, index, argc, p);
			index++;
		}
	}
	else
		index = ft_putlstr(s);
	va_end(ar);
	return (index);
}

int	main(void)
{
	int	r;

	r = ft_printf("the output: %d is %d %d\n", 16, 25, 89);
	// printf("ft_printf retuned value: %d\n", r);
	return (0);
}
