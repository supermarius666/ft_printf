#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"


int	ft_printf(const char *format, ...);
int	ft_formatter(char type, va_list ap);
int ft_putchar(char c);
int ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned int n, char type);
int	ft_putptr(unsigned long n);

#endif