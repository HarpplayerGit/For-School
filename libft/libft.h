/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoledad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:29:38 by asoledad          #+#    #+#             */
/*   Updated: 2021/10/25 17:29:40 by asoledad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int					ft_atoi(char	*str);
void				ft_bzero(void	*s, long unsigned int n);
void				*ft_calloc(long unsigned int	nmemb,
						long unsigned int	size);
int					ft_isalnum(int	c);
int					ft_isalpha(int	c);
int					ft_isascii(int	c);
int					ft_isdigit(int	c);
int					ft_isprint(int	c);
char				*ft_itoa(int	n);
void				*ft_memcpy(void	*dest, void	*src,
						unsigned long int	n);
int					ft_memcmp(const void	*s1, const void	*s2,
						long unsigned int	n);
void				*ft_memset(void	*s, int	c, long unsigned int n);
void				*ft_memchr(const void	*s, int	c, long unsigned int	n);
void				ft_putchar_fd(char	c, int	fd);
void				ft_putendl_fd(char	*s, int	fd);
void				ft_putnbr_fd(int	n, int	fd);
void				ft_putstr_fd(char	*s, int	fd);
char				**ft_split(char const	*str, char	c);
char				*ft_strchr(const char	*s, int	c);
char				*ft_strdup(const char	*s1);
void				ft_striteri(char	*s, void	(*f)(unsigned int, char*));
char				*ft_strjoin(char const	*s1, char const	*s2);
long unsigned int	ft_strlen(const char	*s);
char				*ft_strmapi(char const	*s,
						char	(*f)(unsigned int, char));
char				*ft_strrchr(const char	*s, int	c);
char				*ft_strtrim(char const	*s1, char const	*set);
int					ft_tolower(int	c);
int					ft_toupper(int	c);
int					ft_strncmp(const char	*s1, const char	*s2,
						long unsigned int	n);
char				*ft_strnstr(const char	*largestring,
						const char	*smallstring, long unsigned int	n);
void				*ft_memmove(void	*dest, const void	*src,
						long unsigned int	n);
long unsigned int	ft_strlcat(char	*dest, const char	*src,
						long unsigned int	n);
long unsigned int	ft_strlcpy(char	*dest, const char	*src,
						long unsigned int	n);
char				*ft_substr(char const	*s, unsigned int	start,
						long unsigned int	len);

#endif
