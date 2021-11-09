/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:27 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/09 11:00:01 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
