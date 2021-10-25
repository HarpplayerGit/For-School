/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:34:41 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:34:44 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long unsigned int	ft_strlcpy(char	*dest,
						const char	*src, long unsigned int	n)
{
	long unsigned int	c;
	long unsigned int	i;

	i = 0;
	c = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i >= (c - 1))
		dest[c] = '\0';
	else
		dest[i + 1] = '\0';
	i = ft_strlen(src);
	return (i);
}
