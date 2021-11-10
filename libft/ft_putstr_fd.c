/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:42:41 by asoledad          #+#    #+#             */
/*   Updated: 2021/11/10 17:39:18 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	tapping(char	c, int	fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char	*s, int	fd)
{
	while (*s)
	{
		tapping(*s, fd);
		s++;
	}
}
