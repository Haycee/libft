/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:26:46 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/03 16:32:23 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
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

char	*ft_strrchr(const char *s, int c)
{
	int		s_size;

	s_size = ft_strlen(s) + 1;
	while (s_size >= 0)
	{
		if (s[s_size] == c)
			return ((char *)s + s_size);
		s_size--;
	}
	return (NULL);
}

/**
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*string = "hellow world !";

	printf("strchr 	  : %s\n", strrchr(string, 111));
	printf("strchr 	  : %s\n", strrchr(string, 0));
	printf("strchr 	  : %s\n\n\n", strrchr(string, 104));
	printf("ft_strchr : %s\n", ft_strrchr(string, 111));
	printf("ft_strchr : %s\n", ft_strrchr(string, 0));
	printf("ft_strchr : %s\n", ft_strrchr(string, 104));
}
**/
