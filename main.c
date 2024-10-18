#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
    if (argc > 1) 
    {
        int a = printf("Hello %s, numero: %d, carattere: %c, percentuale: %%\n", argv[1], atoi(argv[2]), (char)argv[3], argv[4]);
        printf("La printf stampa: %d caratteri\n", a);
        printf("------------------------------------------\n");
        int b = ft_printf("Hello %s, numero: %d, carattere: %c, percentuale: %%\n", argv[1], atoi(argv[2]), (char)argv[3], argv[4]);
        printf("La ft_printf stampa: %d caratteri\n", b);
    }
}