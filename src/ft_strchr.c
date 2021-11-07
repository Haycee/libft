/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: agirardi <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 14:54:11 by agirardi		  #+#	#+#			 */
/*   Updated: 2021/11/03 18:03:27 by agirardi		 ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		s_size;

	s_size = ft_strlen(s);
	i = 0;
	while (i < s_size + 1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*string = "hellow world !";

	printf("strchr 	  : %s\n", strchr(string, 111));
	printf("ft_strchr : %s\n", ft_strchr(string, 111));
}
