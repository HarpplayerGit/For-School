/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:08 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 15:10:53 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int	c, size_t	n)
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
