#include "ft_printf.h"

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
    int i;
    int count;

    if (!str)
        return (ft_putstr("(null)"));
    i = 0;
    count = 0;
    while (str[i])
    {
        count += ft_putchar(str[i]);
        i++;
    }
    return (count);
}
