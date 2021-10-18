#include <stdlib.h>

long unsigned int	ft_strlen(const char	*s)
{
	long unsigned int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char			*join;
	long unsigned int	n;
	long unsigned int	i;

	n = ((ft_strlen(s1) - 1) + ft_strlen(s2));
	join = (char *)malloc(n);
	i = 0;
	n = 0;
	if (!*join)
		return ((void *) 0);
	while (s1[n])
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[i])
		join[n++] = s2[i++];
	return (join);
}
