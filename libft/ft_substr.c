/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:26:11 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:15 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const	*s,
			unsigned int	start, long unsigned int	len)
{
	long unsigned int	n;
	char				*sub;

	n = 0;
	sub = (char *)malloc(len);
	if (!sub)
		return ((void *) 0);
	while (n < len)
		sub[n++] = s[start++];
	return (sub);
}
