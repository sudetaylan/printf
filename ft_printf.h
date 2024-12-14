#ifndef FT_PRİNTF_H

# define FT_PRİNTF_H

# include <stdarg.h>
# include <unistd.h>

int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(int nbr);
int ft_puthexa(unsigned int a, char c);
int ft_putadr(unsigned long u);
int ft_putuns(unsigned int u);
int ft_printf(const char *format, ...);

#endif