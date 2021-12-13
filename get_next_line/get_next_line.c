#include "get_next_line.h"

void	str_leftover(char	*str, char	*leftover)
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
}

char	*get_next_line(int	fd)
{
	size_t			i;
	static char		*buff[1000];
	char			*str;

	i = 0;
	buff[fd] = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	str = "";
	if (!buff[fd] || !str)
		return (NULL);
	while ((i = read(fd, buff[fd], BUFFER_SIZE)) > 0 &&
			(search_endl(buff[fd], (BUFFER_SIZE + 1)) == (-1)))
			str = ft_strjoin(str, buff[fd]);
	if (i <= 0)
	{
		free(buff[fd]);
		if (i < 0)
			return (NULL);
	}
	return (str);
}
