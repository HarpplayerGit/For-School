#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*d;
	char	*f;
	int	n;

	d = (char*)s;
	f = d;
	n = (ft_strlen(s) - 1);
	while (*f != c && n > 0)
	{
		f = d + n;
		n--;
	}
	if (*f == c)
		return (f);
	return ((void *) 0);
}
