char	*ft_strnstr(const char	*largestring,\
		const char	*smallstring, long unsigned int	n)
{
	char			*p;
	long unsigned int	i;

	i = 0;
	while (*smallstring != *largestring && *largestring)
		largestring++;
	while (i < n && smallstring[i] &&
			largestring[i] && smallstring[i] == largestring[i])
		i++;
	if (i != n)
		return ((void *) 0);
	p = (char *) largestring;
	return (p);
}
