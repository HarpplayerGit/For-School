/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:50:18 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:50:19 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void	*s, long unsigned int n)
{
	long unsigned int		i;
	unsigned char			*a;

	a = (unsigned char *) s;
	i = 0;
	while (i < n)
		a[i++] = '\0';
}
