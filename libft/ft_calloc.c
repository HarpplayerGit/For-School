#include <stdlib.h>

void	*ft_calloc(long unsigned int	nmemb, long unsigned int	size)
{
	void	*ar;
	
	ar = (void *)malloc(nmemb * size);
	return (ar);
}
