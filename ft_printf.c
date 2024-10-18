#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_formatter(format[i + 1], ap);
			i++;
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

int	ft_formatter(char type, va_list ap)
{
	if (type == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_putptr(va_arg(ap, unsigned long)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (type == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_puthex(va_arg(ap, unsigned int), type));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}
