#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	rc;
	int	ro;
	int	r;

	r = 9;
	// r = ft_printf("the output: %d is %d %c %t x g\n", 16, 25, 'X');
	rc = ft_printf("Hi this me %u\n", -258);
	rc = printf("Hi this me %u\n", -258);
	// ro = printf("Hi this me %d\n", 265);
	// printf("return (value from Mine: %d\n", rc));
	// printf("return (value from orginal: %d\n", ro));
	return (0);
}
