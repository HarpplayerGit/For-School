#include "libft.h"

long unsigned int	ft_strlcat(char	*dest,\
		const char	*src, long unsigned int	n)
{
	long unsigned int	c;
	long unsigned int	i;

	i = (ft_strlen(dest) - 1);
	c = 0;
	while (c < n)
		dest[i++] = src[c++];
	i = ft_strlen(dest);
	if (dest [i])
		dest[i] = '\0';
	i = (ft_strlen(dest) + ft_strlen(src));
	return (i);

}