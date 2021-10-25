/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:31:25 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:31:32 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char	*largestring,
			const char	*smallstring, long unsigned int	n)
{
	char				*p;
	long unsigned int	i;

	i = 0;
	while (*smallstring != *largestring && *largestring)
		largestring++;
	while (i < n && smallstring[i]
		&& largestring[i] && smallstring[i] == largestring[i])
		i++;
	if (i != n)
		return ((void *) 0);
	p = (char *) largestring;
	return (p);
}
