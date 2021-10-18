#include <stdlib.h>

char	*ft_substr(char const	*s,\
		unsigned int	start, long unsigned int	len)
{
	long unsigned int	n;
	char			*sub;

	sub = (char *)malloc(len);
	if (!*sub)
		return ((void *)0);
	while (n < len)
		sub[n++] = s[start++];
	return (sub);
}
