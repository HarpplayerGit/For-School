/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:33 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:44:35 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, void	*src, unsigned long int	n)
{
	unsigned long int		i;
	unsigned char			*as;
	unsigned char			*ad;

	i = 0;
	as = (unsigned char *) src;
	ad = (unsigned char *) dest;
	while (i < n)
	{
		as[i] = ad[i];
		i++;
	}
	return (dest);
}
