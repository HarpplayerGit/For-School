/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:26:11 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 16:02:34 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, size_t	start, size_t	len)
{
	size_t	n;
	char	*sub;

	n = 0;
	sub = (char *)malloc(len);
	if (!sub)
		return ((void *) 0);
	while (n < len)
		sub[n++] = s[start++];
	return (sub);
}
