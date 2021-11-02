#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>

void 	*ft_memset(void *str, int c, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
#endif
