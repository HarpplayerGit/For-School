/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:36:10 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 15:20:40 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_lenght(const char	*s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*join;
	size_t	n;
	size_t	i;

	n = ((s_lenght(s1) - 1) + s_lenght(s2));
	join = (char *)malloc(n);
	i = 0;
	n = 0;
	if (!*join)
		return ((void *) 0);
	while (s1[n])
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[i])
		join[n++] = s2[i++];
	return (join);
}
