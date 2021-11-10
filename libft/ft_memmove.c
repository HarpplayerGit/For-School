/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:19 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 18:19:16 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	unsigned char		*arsrc;
	unsigned char		*ardst;
	size_t				i;

	arsrc = (unsigned char *) src;
	ardst = (unsigned char *) dest;
	if (!ardst && !arsrc)
		return ((void *) 0);
	i = 0;
	if (src < dest)
	{
		while (n--)
			ardst[n] = arsrc[n];
	}
	else
	{
		while (i < n)
		{
			ardst[i] = arsrc[i];
			i++;
		}
	}
	return (dest);
}
