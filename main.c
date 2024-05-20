#include "ft_printf.h"
#include <stdio.h>

int main() {
    // Testing character printing
    ft_printf("ft_printf Character: %c\n", 'A');
printf("printf Character: %c\n", 'A');
    // Testing string printing
    ft_printf("ft_printf String: %s\n", "Hello, world!");
printf("printf String: %s\n", "Hello, world!");
    // Testing pointer printing
    int a = 42;
    ft_printf("ft_printf Pointer: %p\n", &a);
printf("printf Pointer: %p\n", &a);
    // Testing decimal (int) printing
    ft_printf("ft_printf Decimal: %d\n", 12345);
printf(" printf Decimal: %d\n", 12345);
    // Testing integer (int) printing
    ft_printf("ft_printf Integer: %i\n", -12345);
printf("printf Integer: %i\n", -12345);
    // Testing unsigned decimal printing
    ft_printf("ft_printf Unsigned: %u\n", 12345U);
printf("printf Unsigned: %u\n", 12345U);
    // Testing hexadecimal (lowercase) printing
    ft_printf("ft_printf Hexadecimal (lowercase): %x\n", 0x1a2b3c);
printf("printf Hexadecimal (lowercase): %x\n", 0x1a2b3c);
    // Testing hexadecimal (uppercase) printing
    ft_printf("ft_printf Hexadecimal (uppercase): %X\n", 0x1A2B3C);
printf("printf Hexadecimal (uppercase): %X\n", 0x1A2B3C);
    // Testing percent sign printing
    ft_printf("ft_printf Percent sign: %%\n");
printf("printf Percent sign: %%\n");
    return 0;
}
