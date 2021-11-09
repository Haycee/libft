/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:46:25 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/09 10:56:11 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_size;

	i = 0;
	needle_size = ft_strlen(needle);
	if (!needle)
		return (NULL);
	while (haystack[i] && i <= len)
	{
		j = 0;
		while (haystack[i] == needle[j] && i <= len)
		{
			j++;
			if (j == needle_size)
				return ((char *)&haystack[i - j + 1]);
			i++;
		}
		i -= j;
		i++;
	}
	return (NULL);
}

/**
int main(void)
{
	const char hay []= "Hello World !";
	const char needle[] = "He!";

	char *result1;
	char *result2;

	result1 = strnstr(hay, needle,25);
	result2 = ft_strnstr(hay, needle,25);

	printf("strnstr    : %s\n", result1);
	printf("ft_strnstr : %s\n", result2);
}
**/
