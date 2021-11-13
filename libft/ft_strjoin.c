/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:36:10 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 18:34:54 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*nullifying(void	*s, size_t	n)
{
	size_t					i;
	int						c;
	unsigned char			*a;

	a = (unsigned char *) s;
	c = 0;
	i = 0;
	while (i < n)
	{
		a[i++] = c;
	}
	return (s);
}

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

	if (!s1 && !s2)
		return ((void *) 0);
	else if (s1 && !s2)
		n = s_lenght(s1);
	else if (!s1 && s2)
		n = s_lenght(s2);
	else
		n = s_lenght(s1) + s_lenght(s2) - 1;
	join = (char *)malloc(n);
	if (!*join)
		return ((void *) 0);
	nullifying(join, n);
	i = 0;
	n = 0;
	while (s1[n])
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[i])
		join[n++] = s2[i++];
	return (join);
}
