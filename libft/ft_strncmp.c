int ft_strncmp(const char	*s1, const char	*s2, long unsigned int	n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
		i++;
	i = (s1[i] - s2[i]);
	return (i);
}
