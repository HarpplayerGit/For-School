/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:49:55 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:49:56 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(long unsigned int	nmemb, long unsigned int	size)
{
	void	*ar;

	ar = (void *)malloc(nmemb * size);
	return (ar);
}
