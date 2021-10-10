void	*ft_memcpy(void	*dest, void	*src, unsigned long int	n)
{
	unsigned long int	i;
	unsigned char			*as;
	unsigned char			*ad;

	i = 0;
	as = (unsigned char *) src;
	ad = (unsigned char *) dest;
	while (i < n)
		as[i] = ad[i++];
	return (dest);
}
