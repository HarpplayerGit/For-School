/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:08 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:44:10 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*s, int	c, long unsigned int n)
{
	long unsigned int		i;
	unsigned char			*a;

	a = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		a[i++] = c;
	}
	return (s);
}
