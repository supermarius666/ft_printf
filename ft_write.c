#include "ft_printf.h"

void	ft_hex_print(unsigned int n, const char type)
{
	char	*base;

	base = "0123456789abcdef";
	if (n / 16)
		ft_hex_print(n / 16, type);
	if (type == 'X')
		ft_putchar_fd(ft_toupper(base[n % 16]), 1);
	else
		ft_putchar_fd(base[n % 16], 1);
}

void	ft_unbr_print(unsigned int n)
{
	if (n / 10)
		ft_putunbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_ptr_print(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n / 16)
		ft_ptr_print(n / 16);
	ft_putchar_fd(base[n % 16], 1);
}
