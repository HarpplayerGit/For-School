/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:47:22 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:47:24 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	num_len(int	n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = (n * (-1));
	while (n >= 10)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*filling_string(char	*s, int	n)
{
	int	c;
	int	i;

	c = 0;
	i = num_len(n);
	if (n < 0)
	{
		i = num_len(n) + 1;
		s[c++] = '-';
		n = (n * (-1));
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

	if (n < 0)
	{
		s = (char *)malloc(num_len(n) + 2);
		if (!(s))
			return ((void *) 0);
	}
	else
	{
		s = (char *)malloc(num_len(n) + 1);
		if (!(s))
			return ((void *) 0);
	}
	return (filling_string(s, n));
}
