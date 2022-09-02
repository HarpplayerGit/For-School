/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:45:27 by asoledad          #+#    #+#             */
/*   Updated: 2022/09/01 14:01:22 by plasmodiy        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	char	*ar;

	ar = (char *) s;
	if (!ar && !n)
		return ((void *) 0);
	while (*ar && *ar != c && --n)
	{
		ar++;
	}
	if (*ar != c)
		return ((void *) 0);
	return (ar);
}
