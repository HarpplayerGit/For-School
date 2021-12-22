#include "get_next_line.h"

void	str_leftover( char	*leftover)
{
	char	*tail;
	size_t	n;
	size_t	i;

	n = BUFFER_SIZE + 1;
	i = search_endl(leftover, n);
	tail = "";

	tail = ft_strjoin(tail, (leftover + i));
	free(leftover);
	leftover = tail;
	free(tail);
}

char	*get_next_line(int	fd)
{
	size_t			i;
	static char		*buff[1000];
	char			*str;

	i = 0;
	str = "";
	if (fd < 0 || read(fd, str, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!(buff[fd] = (char *) malloc(sizeof (char) * (BUFFER_SIZE + 1))))
		return (NULL);
	while ((i = read(fd, buff[fd], BUFFER_SIZE)) > 0 &&
			(search_endl(buff[fd], (BUFFER_SIZE + 1)) == (-1)))
	{
		buff[fd][i]	= '\0';
		str = ft_strjoin(str, buff[fd]);
	}
	if (i <= 0)
	{
		free(buff[fd]);
		if (i < 0)
			return (NULL);
	}
	return (str);
}
