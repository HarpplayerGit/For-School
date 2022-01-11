/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:42:41 by asoledad          #+#    #+#             */
/*   Updated: 2022/01/11 16:09:38 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	tapping(char	c, int	fd)
{
	write(fd, &c, 1);
}

int	ft_putstr_fd(char	*s, int	fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		tapping('\0', fd);
	else
	{
		while (*s)
		{
			tapping(*s, fd);
			s++;
			i++;
		}
	}
	return (i);
}
