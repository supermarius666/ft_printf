#include "ft_printf.h"
#include <stdio.h>

int main (int argc, char **argv)
{
    int a = printf("Hello %s\n", argv[1]);
    printf("La printf stampa: %d caratteri\n", a);
    printf("------------------------------------------\n");
    int b = ft_printf("Hello %s\n", argv[1]);
    printf("La ft_printf stampa: %d caratteri\n", b);
}