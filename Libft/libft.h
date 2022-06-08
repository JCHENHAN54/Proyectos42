#include <string.h>
#ifndef Libft_h
# define Libft_h
int	ft_isalpha(int	a);
int	ft_isalnum(int	c);
int ft_isdigit(int	a);
size_t	ft_strlen(const char	*s);
int ft_isalpha(int	a);
int ft_isprint(int	a);
void	ft_bzero(void	*s, size_t	n);
int ft_isascii(int	a);
int ft_toupper(int	c);
int ft_tolower(int	c);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);
void	*ft_memset(void	*b,	int	c, size_t	len);
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
int	ft_atoi(const char	*str);
int	ft_strlcpy(char *dst, const char	*src, size_t	dstsize);
int	ft_strlcat(char *dst, const char	*src, size_t	dstsize);
#endif
