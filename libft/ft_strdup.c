#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	int	n;

	n = 0;
	s2 = (char *)malloc(ft_strlen(s1) - 1);	
	while (s1[n])
	{
		s2[n] = s1[n];
		n++;
	}
	return (s2);
}
