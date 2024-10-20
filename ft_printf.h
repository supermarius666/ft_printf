#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	    ft_printf(const char *format, ...);
int	    ft_formatter(char type, va_list ap);
int     ft_putchar(char c);
int     ft_putstr(char *str);
int	    ft_putnbr(int n);
int	    ft_putunbr(unsigned int n);
int	    ft_puthex(unsigned int n, char type);
int     ft_putptr(unsigned long n);
int	    ft_lenptr(unsigned long n);
int	    ft_lenhex(unsigned int n);
int	    ft_lenunbr(unsigned int nbr);
void    ft_hex_print(unsigned int n, const char type);
void	ft_unbr_print(unsigned int n);
void	ft_ptr_print(unsigned long n);
#endif