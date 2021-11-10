/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:45:18 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 15:08:07 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char			*ar1;
	unsigned char			*ar2;
	size_t					i;

	ar1 = (unsigned char *) s1;
	ar2 = (unsigned char *) s2;
	i = 0;
	if (!n)
		return (0);
	while ((ar1[i] == ar2[i]) && (i < (n - 1)))
		i++;
	i = (ar1[i] - ar2[i]);
	return (i);
}
