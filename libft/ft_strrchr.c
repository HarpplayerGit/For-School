#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*d;
	int	n;

	n = (ft_strlen(s) - 1);
	while (s[n] && s[n] != c)
		n--;
	while (n != 0)
	{
		s++;
		n--;
	}
	d = (char*)s;
	if (*d == c)
		return (d);
	return ((void *) 0);
}
