/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:35:06 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 14:41:34 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_of_str(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

size_t	ft_strlcat(char	*dest,
						const char	*src, size_t	dstsize)
{
	size_t	c;
	size_t	i;
	size_t	n;

	c = size_of_str(dest);
	i = 0;
	n = size_of_str(src) + size_of_str(dest);
	if (c >= dstsize)
		return (size_of_str(src) + dstsize);
	while (src[i] && (c + 1) < dstsize)
		dest[c++] = src[i++];
	dest[c] = '\0';
	return (n);
}
