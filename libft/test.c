#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s1[] = "baz faz maz.......";

	ft_memmove (s1 + 4, s1 + 8, 3);
	printf ("%s\n", s1);
	return (0);
}
