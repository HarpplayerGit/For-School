char	*ft_strchr(const char	*s, int	c)
{
	char	*d;
	int	n;

	n = 0;
	while (*s && (*s != c))
		s++;
	d = (char *)s;
	if (*d == c)
		return (d);
	return ((void *) 0);
}
