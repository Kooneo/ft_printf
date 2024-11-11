/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:10:42 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/11 21:48:05 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(const char *str, int index, int argc, va_list *ar)
{
	int	count;

	count = 0;
	if (argc)
	{
		if (ft_is_specifier(str, index, 'd') || ft_is_specifier(str, index,
				'i'))
			ft_printf_int(&ar);
		if (ft_is_specifier(str, index, 'c'))
			ft_printf_char(&ar);
		if (ft_is_specifier(str, index, 's'))
			ft_printf_str(&ar);
		// if (ft_is_specifier(str, index, 'p'))
		// if (ft_is_specifier(str, index, 'i'))
		// if (ft_is_specifier(str, index, 'u'))
		// if (ft_is_specifier(str, index, 'x'))
		// if (ft_is_specifier(str, index, 'X'))
		//  adding more {'c', 's', 'p', 'd', 'i', 'u', 'x',  'X'}
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	int		index;
	int		printed;
	int		argc;

	va_start(ar, s);
	index = 0;
	argc = count_arg_in_s(s);
	if (argc > 0)
	{
		while (s[index] != '\0')
		{
			if (s[index] == '%' && is_valid_specifier(s[index + 1]))
			{
				ft_handle(s, index, argc, &ar);
				index++;
			}
			else
				ft_putchar_fd(s[index], 1);
			index++;
			// if (index > 0 && s[index] != '%' && s[index - 1] != '%')
			// {
			// 	ft_putchar_fd(s[index], 1);
			// 	index++;
			// }
			// else if (s[index] == '%')
			// {
			// 	if (is_valid_specifier(s[index + 1]))
			// 		ft_handle(s, index, argc, &ar);
			// 	else
			// 		ft_putchar_fd(s[index], 1);
			// }
			// else if (index > 0 && s[index - 1] != '%')
			// {
			// 	ft_putchar_fd(s[index], 1);
			// 	index++;
			// }
			// else
			// {
			// 	ft_putchar_fd(s[index], 1);
			// }
			// index++;
		}
	}
	else
		index = ft_putlstr(s);
	va_end(ar);
	return (index);
}

int	main(void)
{
	int	rc;
	int	ro;

	// int	r;
	// r = ft_printf("the output: %d is %d %c %t x g\n", 16, 25, 'X');
	rc = ft_printf("Hi this me %d\n", 265);
	ro = printf("Hi this me %d\n", 265);
	// printf("return (value from Mine: %d\n", rc));
	// printf("return (value from orginal: %d\n", ro));
	return (0);
}
