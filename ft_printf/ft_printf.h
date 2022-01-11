#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int 	ft_printf(const char *prhd, ...);
void	ft_putchar_fd(char	c, int	fd);
int		ft_putstr_fd(char	*s, int	fd);
int		ft_putnbr_fd(int	n, int	fd);
int		ft_putnbr_u_fd(unsigned int	n, int	fd);
int		ft_binary(unsigned long long int argc, int	t);
int		ft_puthex(unsigned long long number, int k);

#endif
