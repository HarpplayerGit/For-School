void	*ft_memchr(const void	*s, int	c, long unsigned int	n)
{
	unsigned char		*ar;
	long unsigned int	i;

	i = 0;
	ar = (unsigned char *) s;
	while (*ar && *ar != c && i < n)
	{
		ar++;
		i++;
	}
	if (*ar != c)
		return ((void *) 0);
	return (ar);
}