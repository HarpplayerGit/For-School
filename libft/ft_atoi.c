int	ft_atoi(char	*str)
{
	unsigned int	n;
	int		m;
	int		i;

	n = 0;
	m = 1;
	i = 0;
	while (str[n] && ((str[n] == ' ') || ((str[n] >= 8) && (str[n] <= 13))))
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			m = m * (-1);

		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
		i = ((i * 10) + (str[n++] - '0'));
	return (i * m);
}
