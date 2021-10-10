void	ft_bzero(void	*s, long unsigned int n)
{
	long unsigned int	i;
	unsigned char			*a;

	a = (unsigned char *) s;
	i = 0;
	while (i < n)
		a[i++] = '\0';
}
