/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:41:42 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 20:06:05 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**clear_mass(char	**mass, int	n)
{
	while (n)
	{
		free(mass[n]);
		n--;
	}
	free(mass);
	return ((void *) 0);
}

int	len_word(char const	*str, char c)
{
	int	i;

	i = 0;
	while (*str == c && *str)
		str++;
	while (*str != c && *str)
	{
		i++;
		str++;
	}
	return (i);
}

int	number_of_words(char const	*str, char	c)
{
	int	n;

	n = 0;
	while (*str == c && (str + 1))
		str++;
	while (*str)
	{
		n++;
		while (*str != c && *str)
			str++;
		while (*str == c && (str + 1))
			str++;
	}
	return (n);
}

char	**filling_strings(char const	*str, char	c, char	**mass)
{
	int	nw;
	int	i;
	int	n;

	i = 0;
	n = 0;
	nw = number_of_words(str, c);
	while (n < nw)
	{
		mass[n] = (char *)malloc(sizeof (char) * (len_word(str, c) + 1));
		if (!(mass[n]))
			return (clear_mass(mass, n));
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			mass[n][i] = *str;
			i++;
			str++;
		}
		mass[n][i] = '\0';
		i = 0;
		n++;
	}
	return (mass);
}

char	**ft_split(char const	*str, char	c)
{
	char	**mass;
	int		nw;

	if (!str || !c)
		return ((void *) 0);
	nw = number_of_words(str, c);
	mass = (char **)malloc(sizeof (char *) * nw);
	if (!(mass))
		return ((void *) 0);
	return (filling_strings(str, c, mass));
}
