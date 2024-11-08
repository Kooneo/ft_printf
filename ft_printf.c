/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:10:42 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/08 18:29:07 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle(const char *str, int index, int argc, va_list *ar)
{
	if (argc)
	{
		if (ft_is_specifier(str, index, 'd'))
			ft_printf_int(&ar);
		if (ft_is_specifier(str, index, 'c'))
			ft_printf_char(&ar);
		// if (ft_is_specifier(str, index, 's'))
		// 	ft_printf_str(&ar);
		// if (ft_is_specifier(str, index, 'p'))
		// if (ft_is_specifier(str, index, 'i'))
		// if (ft_is_specifier(str, index, 'u'))
		// if (ft_is_specifier(str, index, 'x'))
		// if (ft_is_specifier(str, index, 'X'))

		//  adding more {'c', 's', 'p', 'd', 'i', 'u', 'x',  'X'}
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	ar;
	int		index;
	int		argc;

	va_start(ar, s);
	index = 0;
	argc = count_arg_in_s(s);
	if (argc > 0)
	{
		while (s[index] != '\0')
		{
			if (index > 0 && s[index] != '%' && s[index - 1] != '%')
			{
				ft_putchar_fd(s[index], 1);
			}
			else if (s[index] == '%')
			{
				if (is_valid_specifier(s[index + 1]))
					ft_handle(s, index, argc, &ar);
				else
					ft_putchar_fd(s[index], 1);
			}
			else if (index > 0 && s[index - 1] != '%')
			{
				ft_putchar_fd(s[index], 1);
			}
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
	// int	r;

	// r = ft_printf("the output: %d is %d %c %t x g\n", 16, 25, 'X');
	// // printf("ft_printf retuned value: %t\n", r);

    int og = printf("Hi %c %d \n", 'a', 293874);
    int ft = ft_printf("Hi %c %d \n", 'a', 293874);

    printf("og: %d\nft: %d", og, ft);
	return (0);
}