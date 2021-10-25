/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:37:17 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:37:18 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	int		n;

	n = 0;
	s2 = (char *)malloc(ft_strlen(s1) - 1);
	while (s1[n])
	{
		s2[n] = s1[n];
		n++;
	}
	return (s2);
}
