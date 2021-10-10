long unsigned int	ft_strlen(const char	*s)
{
	long unsigned int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}
