/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:44:19 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:44:21 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void	*dest, const void	*src, long unsigned int	n)
{
	unsigned char		*arsrc;
	unsigned char		*ardst;
	long unsigned int	i;

	arsrc = (unsigned char *) src;
	ardst = (unsigned char *) dest;
	i = 0;
	if (arsrc > ardst)
		while (n-- > i)
			ardst[i] = arsrc[i];
	else
	{
		arsrc = (((unsigned char *) src) + (n - 1));
		ardst = (((unsigned char *) dest) + (n - 1));
		while (--n >= i)
			ardst[n] = arsrc[n];
	}
	return (dest);
}
