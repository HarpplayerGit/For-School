#include "ft_printf.h"

static char	*create_line(char	*my_s, unsigned long long int m)
{
	size_t	i;

	i = 0;
	my_s = (char *)malloc(sizeof(char) * (m + 1));
	if (!my_s)
		return (NULL);
	while (i < (m + 1))
		my_s[i++] = '\0';
	return (my_s);
}

int	get_size(int	len, int	n)
{
	int	c;

	c = 0;
	while (n >= len)
	{
		n = n / len;
		c++;
	}
	return (c);
}

static	int	hex_kex(unsigned long long int	n, char	*str)
{
	char					*my_s;
	unsigned long long int	i;
	unsigned long long int	len;
	unsigned long long int	m;

	my_s = NULL;
	len = 0;
	while (str[len])
		len++;
	i = 0;
	m = get_size(len, n);
	my_s = create_line(my_s, m);
	if (!my_s)
		return (0);
	while (n >= len)
	{
		i = n % len;
		n = n / len;
		my_s[m--] = str[i];
	}
	my_s[m] = str[n];
	i = ft_putstr_fd (my_s, 1);
	free(my_s);
	return (i);
}

int	ft_binary(unsigned long long int num, int	t)
{
	char	*hex_type1 = "0123456789abcdef";
	char	*hex_type2 = "0123456789ABCDEF";

	if (t == 1)
		return (hex_kex(num, hex_type1));
	else if (t == 2)
		return (hex_kex(num, hex_type2));
	else if (t == 3)
	{
		ft_putstr_fd("0x", 1);
		return (hex_kex(num, hex_type1) + 2);
	}
	return (0);
}
