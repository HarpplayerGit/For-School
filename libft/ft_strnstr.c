/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:31:25 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 16:01:29 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*largestring,
					const char	*smallstring, size_t	n)
{
	char	*p;
	size_t	i;

	i = 0;
	while (*smallstring != *largestring && *largestring
		&& n-- && *smallstring)
		largestring++;
	while (i < n && smallstring[i]
		&& largestring[i] && smallstring[i] == largestring[i])
		i++;
	if (!n || smallstring[i] != '\0')
		return ((void *) 0);
	p = (char *) largestring;
	return (p);
}
