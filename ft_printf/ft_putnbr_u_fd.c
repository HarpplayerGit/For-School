/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:42:53 by asoledad          #+#    #+#             */
/*   Updated: 2022/01/08 15:53:34 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(int	n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (n <= -10)
		{
			n = ((n / 10) * -1);
			i = i + 2;
		}
		else
		{
			n = (n * (-1));
			i++;
		}
	}
	while (n >= 10)
	{
		n = (n / 10);
		i++;
	}
	return (i + 1);
}

static void	tapping(char	c, int	fd)
{
	write(fd, &c, 1);
}

static void	writting_num(unsigned int	i, int	fd)
{
	if (i >= 10)
		writting_num((i / 10), fd);
	tapping(((i % 10) + '0'), fd);
}

int	ft_putnbr_u_fd(unsigned int	n, int	fd)
{
	unsigned int	i;
	unsigned int	l;
 
	l = num_len(n);
	if (n < 0)
		return (0);
	else
		i = n;
	writting_num(i, fd);
	return (l);
}
