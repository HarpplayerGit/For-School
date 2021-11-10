/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:33 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 18:17:58 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void	*src, size_t	n)
{
	size_t					i;
	unsigned char			*as;
	unsigned char			*ad;

	i = 0;
	if (!dest && !src)
		return ((void *)0);
	as = (unsigned char *) src;
	ad = (unsigned char *) dest;
	while (i < n)
	{
		ad[i] = as[i];
		i++;
	}
	return (dest);
}
