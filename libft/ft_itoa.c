/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:47:22 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 18:45:45 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int	n)
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

char	*filling_string(char	*s, int	n)
{
	int	c;
	int	i;

	c = 0;
	i = num_len(n);
	s[i--] = '\0';
	if (n < 0)
	{
		s[c++] = '-';
		s[i--] = (((n % 10) * -1) + '0');
		if (n <= -10)
			n = ((n / 10) * -1);
		else
			return (s);
	}
	while (i > c)
	{
		s[i--] = ((n % 10) + '0');
		n = n / 10;
	}
	s[i] = ((n % 10) + '0');

	return (s);
}

char	*ft_itoa(int	n)
{
	char	*s;

	s = (char *)malloc(num_len(n) + 1);
	if (!(s))
		return ((void *) 0);
	return (filling_string(s, n));
}
