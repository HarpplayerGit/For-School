#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int	i;
	int	n;
	char	*c;
	char	*trim;

	n = 0;
	i = 0;
	if (!(trim = (char *)malloc(ft_strlen(s1) - 1)))
		return ((void *) 0);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	return (trim);
}
