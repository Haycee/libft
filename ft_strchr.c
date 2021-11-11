/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:00:14 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/11 19:04:05 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

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

/**
int	main(void)
{
	char	*string = "hellow world !";

	printf("strchr 	  : %s\n", strchr(string, 111));
	printf("ft_strchr : %s\n", ft_strchr(string, 111));
}
**/
