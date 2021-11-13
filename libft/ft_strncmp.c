/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:32:14 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/13 15:49:57 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	unsigned long	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] && s2[i])
		i++;
	if (s1[i] < 0 && s2[i] == 0)
		return (s1[i] * -1);
	i = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (i);
}
