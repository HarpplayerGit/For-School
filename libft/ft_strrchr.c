/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:28:13 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:28:15 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*d;
	char	*f;
	int		n;

	d = (char *)s;
	f = d;
	n = (ft_strlen(s) - 1);
	while (*f != c && n > 0)
	{
		f = d + n;
		n--;
	}
	if (*f == c)
		return (f);
	return ((void *) 0);
}
