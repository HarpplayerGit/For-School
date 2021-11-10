/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:37:17 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 15:18:14 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memcopy(void	*dest, void	*src, size_t	n)
{
	size_t					i;
	unsigned char			*as;
	unsigned char			*ad;

	i = 0;
	as = (unsigned char *) src;
	ad = (unsigned char *) dest;
	while (i < n)
	{
		ad[i] = as[i];
		i++;
	}
	return (dest);
}

static size_t	len_of_string(const char	*s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	size_t	n;

	n = 0;
	s2 = malloc(len_of_string(s1) + 1);
	if (!s2)
		return ((void *) 0);
	return (memcopy(s2, (char *)s1, (len_of_string(s1) + 1)));
}
