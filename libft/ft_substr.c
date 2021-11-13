/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:26:11 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 19:16:31 by asoledad         ###   ########.fr       */
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

char	*ft_substr(char const	*s, size_t	start, size_t	len)
{
	size_t	n;
	char	*sub;

	n = 0;
	if (!s)
		return ((void *) 0);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return ((void *) 0);
	if (start >= s_lenght(s))
	{
		while (n < len)
			sub[n++] = '\0';
	}
	else
	{
		while (n < len)
			sub[n++] = s[start++];
	}
	sub[n] = '\0';
	return (sub);
}
