#include "ft_printf.h"

int	ft_raspred(va_list	tempr, char	type)
{
	if (type == 'c')
	{
		ft_putchar_fd (va_arg(tempr, int), 1);
		return (1);
	}
	else if (type == 's')
		return (ft_putstr_fd(va_arg(tempr, char *), 1));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_fd(va_arg(tempr, int), 1));
	else if (type == 'p')
		return (ft_binary(va_arg(tempr, unsigned long long int), 3));
	else if (type == 'u')
		return(ft_putnbr_u_fd(va_arg(tempr, unsigned int), 1));
	else if (type == 'x')
		return (ft_binary(va_arg(tempr, unsigned long long int), 1));
	else if (type == 'X')
		return (ft_binary(va_arg(tempr, unsigned long long int), 2));
	else if (type == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int ft_printf(const char *prhd, ...)
{
	va_list	tempr;
	int		n;
	int		i;

	n = 0;
	i = 0;
	va_start(tempr, prhd);
	while (prhd[n])
	{
		if (prhd[n] == '%' && prhd[n + 1] != '\0')
		{
			++n;
			i += ft_raspred(tempr, prhd[n]);
		}
		else
		{
			ft_putchar_fd(prhd[n], 1);
			i++;
		}
		n++;
	}
	va_end(tempr);
	return(i);
}
