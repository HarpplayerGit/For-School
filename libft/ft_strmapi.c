#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	int	n;
	char	*str;

	str = (char *)malloc(ft_strlen(s) - 1);
	while (s[n])
	{
		str[n] = f(n, s[n]);
	}
}
