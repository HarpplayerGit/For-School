void	*ft_memmove(void	*dest, const void	*src, long unsigned int	n)
{
	unsigned char		*arsrc;
	unsigned char		*ardst;
	long unsigned int	i;

	arsrc = (unsigned char *) src;
	ardst = (unsigned char *) dest;
	i = 0;
	if (arsrc > ardst)
		while (n-- > i)
			ardst[i] = arsrc[i];
	else
	{
		arsrc = (((unsigned char *) src) + (n - 1));
		ardst = (((unsigned char *) dest) + (n - 1));
		while (--n >= i)
			ardst[n] = arsrc[n];
	}
	return (dest);
}
