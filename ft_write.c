#include "ft_printf.h"

void	ft_puthex_print(unsigned int n, const char type)
{
	char	*base;

	base = "0123456789abcdef";
	if (n / 16)
		ft_puthex_print(n / 16, type);
	if (type == 'X')
		ft_putchar_fd(ft_toupper(base[n % 16]), 1);
	else
		ft_putchar_fd(base[n % 16], 1);
}

void	ft_putunbr_print(unsigned int n)
{
	if (n / 10)
		ft_putunbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putptr_print(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n / 16)
		ft_putptr_print(n / 16);
	ft_putchar_fd(base[n % 16], 1);
}

/* len */

int	ft_lenptr(unsigned long n)
{
	int	len;

	if (!n)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

int	ft_lenhex(unsigned int n)
{
	int	len;

	if (!n)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

int	ft_lenunbr(unsigned int nbr)
{
	int	len;

	if (!nbr)
		return (1);
	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}