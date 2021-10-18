char	*ft_strchr(const char	*s, int	c)
{
	char	*d;

	d = (char *)s;
	while (*d && (*d != c))
		d++;
	if (!*d)
		return ((void *) 0);
	return (d);
}
