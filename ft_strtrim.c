/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:48 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/09 10:27:48 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[start] == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*moulinette_trim(int start, int end, char *trimmed, char const *s1)
{
	int	i;

	i = 0;
	while (i < end - start + 1)
	{
		trimmed[i] = s1[i + start];
		i++;
	}
	if (end != -1)
		trimmed[end - start + 1] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;

	if(!s1)
		return(NULL);
	start = 0;
	while (is_charset(s1, set, start))
		start++;
	end = ft_strlen(s1) - 1;
	while (is_charset(s1, set, end))
		end--;
	if (end - start < -1)
		return (ft_calloc(1, 1));
	trimmed = malloc(sizeof(char) * (end - start) + 2);
	if (!trimmed)
		return (NULL);
	return (moulinette_trim(start, end, trimmed, s1));
}