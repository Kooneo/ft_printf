#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Include your header file

int main(void)
{
    int orig_ret;
    int ft_ret;

    // Test 1: Basic string and character
    printf("\n=== Test 1: Basic Strings and Characters ===\n");
    orig_ret = printf("Original: Hello %s! Character: %c\n", "World", 'A');
    ft_ret = ft_printf("Ft_print: Hello %s! Character: %c\n", "World", 'A');
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 2: Numbers (decimal and integer)
    printf("\n=== Test 2: Numbers ===\n");
    orig_ret = printf("Original: Number: %d, Other number: %i\n", 42, -42);
    ft_ret = ft_printf("Ft_print: Number: %d, Other number: %i\n", 42, -42);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 3: Unsigned numbers and hexadecimal
    printf("\n=== Test 3: Unsigned and Hex ===\n");
    orig_ret = printf("Original: Unsigned: %u, Hex: %x, HEX: %X\n", 42, 42, 42);
    ft_ret = ft_printf("Ft_print: Unsigned: %u, Hex: %x, HEX: %X\n", 42, 42, 42);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 4: Pointers
    int num = 42;
    void *ptr = &num;
    printf("\n=== Test 4: Pointers ===\n");
    orig_ret = printf("Original: Pointer: %p\n", ptr);
    ft_ret = ft_printf("Ft_print: Pointer: %p\n", ptr);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 5: Edge cases
    printf("\n=== Test 5: Edge Cases ===\n");
    orig_ret = printf("Original: Empty string: '%s'\n", "");
    ft_ret = ft_printf("Ft_print: Empty string: '%s'\n", "");
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 6: Multiple % signs
    printf("\n=== Test 6: Multiple %% Signs ===\n");
    orig_ret = printf("Original: 100%% %% Complete%%\n");
    ft_ret = ft_printf("Ft_print: 100%% %% Complete%%\n");
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 7: Mixing formats
    printf("\n=== Test 7: Mixed Formats ===\n");
    orig_ret = printf("Original: %s %d %x %X %p %%\n", "Mix", 42, 42, 42, ptr);
    ft_ret = ft_printf("Ft_print: %s %d %x %X %p %%\n", "Mix", 42, 42, 42, ptr);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 8: Integer limits
    printf("\n=== Test 8: Integer Limits ===\n");
    orig_ret = printf("Original: Max int: %d, Min int: %d\n", INT_MAX, INT_MIN);
    ft_ret = ft_printf("Ft_print: Max int: %d, Min int: %d\n", INT_MAX, INT_MIN);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 9: NULL pointer and string
    printf("\n=== Test 9: NULL Values ===\n");
    orig_ret = printf("Original: Null string: %s, Null pointer: %p\n", NULL, NULL);
    ft_ret = ft_printf("Ft_print: Null string: %s, Null pointer: %p\n", NULL, NULL);
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    // Test 10: Long string
    printf("\n=== Test 10: Long String ===\n");
    orig_ret = printf("Original: %s\n", "This is a very long string that we will use to test the behavior of our printf function with longer inputs to ensure it works correctly with bigger strings");
    ft_ret = ft_printf("Ft_print: %s\n", "This is a very long string that we will use to test the behavior of our printf function with longer inputs to ensure it works correctly with bigger strings");
    printf("Original Return: %d\n", orig_ret);
    printf("Ft_print Return: %d\n", ft_ret);

    return (0);
}