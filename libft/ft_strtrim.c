/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:27:10 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 16:39:05 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*trimm;
	int		n;

	if (!s1 && !set)
		return ((void *) 0);
	n = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (s1[n] && ft_strchr(set, s1[n]))
		n--;
	trimm = ft_substr(s1, 0, (n - 1));
	return (trimm);
}
