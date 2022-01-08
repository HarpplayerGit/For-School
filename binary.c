#include <stdio.h>
#include <stdlib.h>

int	get_size(int	len, int	n)
{
	int	c;
	int	i;

	c = 0;
	i = len;
	while (n >= len)
	{
		i = n % len;
		n = n / len;
		c++;
	}
	return (c);
}

char	*binary(int	n, char	*str)
{
	char		*my_s;
	long long	i;
	int		len;
	int		m;

	len = 0;
	while (str[len])
		len++;
	i = len;
	m = get_size(len, n);
	my_s = (char *) malloc((m + 1) * sizeof(char));
	while (n >= len)
	{
		i = n % len;
		n = n / len;
		my_s[m--] = str[i];
	}
	my_s[m] = str[n];
	return (my_s);
}

int	main(/*int argc, char	**argv*/)
{
	int	n;
	char	*str = "0123456789abcdef";

	/*if (argc != 2)
	{
		printf("Wrong argument!!!");
		return (0);
	}
	n = atoi(argv[1]);*/
	n = 586;
	printf("Digit: %d\n\nBase: %s\n\nResult: ", n, str);
	printf("%s\n", binary(n, str));
	return (0);
}
