#include <stdlib.h>

char	**clear_mass(char	**mass)
{
	int	n;

	n = 0;
	while (mass[n])
		free(mass[n]);
	free(mass);
	return ((void *) 0);
}

int	len_word(char const	*str, char c)
{
	int	i;

	i = 0;
	while (*str == c && *str)
		str++;
	while (*str != c && *str)
	{
		i++;
		str++;
	}
	return (i);
}

int	number_of_words(char const	*str, char	c)
{
	int n;

	n = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		n++;
		while (*str != c && *str)
			str++;
	}
	return (n + 1);
}

char	**filling_strings(char const	*str, char	c, char	**mass)
{
	int	nw;
	int	i;
	int	n;

	i = 0;
	n = 0;
	nw = number_of_words(str, c);
	while (n < nw)
	{
		if (!(mass[n] = (char*)malloc(sizeof (char) *
					       	(len_word(str, c) + 1))))
			return (clear_mass(mass));
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			mass[n][i] = *str;
			i++;
			str++;
		}
		i = 0;
		n++;
	}
	return (mass);
}

char	**ft_split(char const	*str, char	c)
{
	char	**mass;
	int	nw;
	
	nw = number_of_words(str, c);
	if (!(mass = (char**)malloc(sizeof (char*) * nw)))
		return ((void *) 0);
	return (filling_strings(str, c, mass));
}