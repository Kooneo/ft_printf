/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:23:16 by zbakour           #+#    #+#             */
/*   Updated: 2024/11/23 13:42:59 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	rc;
	int	ro;
	int	r;

	r = 9;
	//ft_printf("%");
	// r = ft_printf("the output: %d is %d %c %t x g\n", 16, 25, 'X');
	// rc =  ft_printf("%s", (char *)NULL);
	// ft_printf("%s", NULL);
	// printf("%s", NULL);
	ft_printf("%d %d\n", 42);
	printf("%d %d\n", 42);
	// printf("orginal: %d\n", &r);
	// printf("%d", printf("%    p", &r));

	//ro =  printf("%%c\tusisjn%d\v\0\n", 15);
	// rc = ft_printf("%X\n", 258968);
	// rc = ft_printf("%x\n", 0x7ffee005f980);
	// ro = printf("%p\n", &r);
	// ro = printf("%+8d", 0);
	// ro = printf("Hi this me %d\n", 265);
	// printf("return (value from Mine: %d\n", rc);
	//printf("return (value from orginal: %d\n", ro);
	return (0);
}
