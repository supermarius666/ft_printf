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
	ft_unbr_print(n);
   	return (ft_lenunbr(n));
}
int	ft_puthex(unsigned int n, char type)
{
	ft_hex_print(n, type);
	return (ft_lenhex(n));
}
int	ft_putptr(unsigned long n)
{
	if (!n)
		return (ft_putstr("(nil)"));
    ft_putstr_fd("0x", 1);
	ft_ptr_print(n);
	return (ft_lenptr(n) + 2);
}
