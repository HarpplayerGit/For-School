#include "get_next_line.h"

static size_t	s_lenght(const char	*s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

static char	*s_copy(char *s1, const char	*s2)
{
	size_t	n;

	n = 0;
	while (s2[n] && s2[n - 1] != '\n')
	{
		s1[n] = s2[n];
		n++;
	}
	s1[n] = s2[n];
	return (s1);
}

static char	*s_cat(char	*s1, const char	*s2)
{
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	while (s1[n])
		++n;
	while (s2[i] && s2[i] != '\n')
	{
		s1[n] = s2[i - 1];
		n++;
		i++;
	}
	s1[n] = '\0';
	return (s1);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*join;
	size_t	n;

	if (!s1 && !s2)
		return ((void *) 0);
	else if (s1 && !s2)
		n = s_lenght(s1);
	else if (!s1 && s2)
		n = s_lenght(s2);
	else
		n = s_lenght(s1) + s_lenght(s2);
	join = (char *)malloc(n + 1);
	if (!join)
		return ((void *) 0);
	if (s1 && s2)
	{
		join = s_copy(join, s1);
		join = s_cat(join, s2);
	}
	else if (s1 && !s2)
		join = s_copy(join, s1);
	else if (!s1 && s2)
		join = s_copy(join, s2);
	return (join);
}

int	search_endl(const void	*s, size_t	n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*(unsigned char *)(s + count) == '\n')
			return (count);
		count++;
	}
	return (-1);
}
