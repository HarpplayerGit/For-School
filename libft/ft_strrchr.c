/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:28:13 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 15:29:33 by asoledad         ###   ########.fr       */
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

char	*ft_strrchr(const char	*s, int	c)
{
	char	*d;
	char	*f;
	int		n;

	d = (char *)s;
	f = d;
	n = s_lenght(s);
	while (*f != c && n > 0)
	{
		f = d + n;
		n--;
	}
	if (*f != c)
		return ((void *) 0);
	return (f);
}
