#include "ft_printf.h"

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
