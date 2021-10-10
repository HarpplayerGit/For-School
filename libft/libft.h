#ifndef LIBFT_H
#define LIBFT_H

int	ft_atoi(char	*str);
void	ft_bzero(void	*s, long unsigned int n);
int	ft_isalnum(int	c);
int	ft_isalpha(int	c);
int	ft_isascii(int	c);
int	ft_isdigit(int	c);
int	ft_isprint(int	c);
void	*ft_memcpy(void	*dest, void	*src, unsigned long int	n);
void	*ft_memset(void	*s, int	c, long unsigned int n);
char	*ft_strchr(const char	*s, int	c);
long unsigned int	ft_strlen(const char	*s);
char	*ft_strrchr(const char	*s, int	c);
int	ft_tolower(int	c);
int	ft_toupper(int	c);
int ft_strncmp(const char	*s1, const char	*s2, long unsigned int	n);
char	*ft_strnstr(const char	*largestring,\
		const char	*smallstring, long unsigned int	n);
void	*ft_memmove(void	*dest, const void	*src, long unsigned int	n);

#endif
