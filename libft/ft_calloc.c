/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:49:55 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 19:36:16 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*fill_with_nul(void	*s, int	c, size_t	n)
{
	size_t					i;
	unsigned char			*a;

	a = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		a[i++] = c;
	}
	return (s);
}

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*ar;

	ar = malloc(nmemb * size);
	if (!ar)
		return ((void *) 0);
	fill_with_nul(ar, 0, (nmemb * size));
	return (ar);
}
