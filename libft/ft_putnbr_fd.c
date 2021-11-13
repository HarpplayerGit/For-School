/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:42:53 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 18:23:58 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	tapping(char	c, int	fd)
{
	write(fd, &c, 1);
}

void	writting_num(unsigned int	i, int	fd)
{
	unsigned int	y;
	int				j;
	char			c;

	y = i;
	j = 1;
	while (y >= 10)
	{
		i = y;
		while (i >= 10)
		{
			i = i / 10;
			j *= 10;
		}
		c = i + '0';
		tapping(c, fd);
		y = y % j;
		j = 1;
	}
	c = y + '0';
	tapping(c, fd);
}

void	ft_putnbr_fd(int	n, int	fd)
{
	unsigned int	i;

	if (n < 0)
	{
		tapping('-', fd);
		i = (unsigned int)(n * -1);
	}
	else
		i = (unsigned int)n;
	writting_num(i, fd);
}
