/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:51:23 by asoledad          #+#    #+#             */
/*   Updated: 2021/12/08 18:27:41 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<stdlib.h>
# include	<unistd.h>

char		*get_next_line(int	fd);
char		*ft_strjoin(char const	*s1, char const	*s2);
int			search_endl(const void	*s, size_t	n);

#endif
