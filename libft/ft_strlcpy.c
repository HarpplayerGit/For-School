#include "libft.h"

long unsigned int	ft_strlcpy(char	*dest,\
		const char	*src, long unsigned int	n)
{
	long unsigned int	c;
	long unsigned int	i;

	i = 0;
	c = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i >= (c - 1))
		dest[c] = '\0';
	else
		dest[i + 1] = '\0';
	i = ft_strlen(src);
	return (i);
}
