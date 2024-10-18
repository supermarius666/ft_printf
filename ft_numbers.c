#include "ft_printf.h"

int	ft_putnbr(int n)
{
    char	*nbr;
	int		count;

	nbr = ft_itoa(n);
	if (!nbr)
		return (-1);
	count = ft_putstr(nbr);
	free(nbr);
	return (count);
}
int	ft_putunbr(unsigned int n)
{
    (void)n;
    return (0);
}
int	ft_puthex(unsigned int n, char type)
{
    
	ft_puthex_print(n, type);
	return (ft_lenhex(n));
}
int	ft_putptr(unsigned long n)
{
    (void)n;
    return (0);
}