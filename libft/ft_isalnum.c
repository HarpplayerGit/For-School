/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:49:26 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:49:28 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int	c)
{
	if (((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
		return (8);
	else if ((48 <= c) && (c <= 57))
		return (8);
	return (0);
}
