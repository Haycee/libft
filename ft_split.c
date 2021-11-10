/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:44 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/10 09:53:20 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			counter++;
		if (s[i] != c && s[i + 1] == '\0')
			counter++;
		i++;
	}
	return (counter);
}

void	secondary_array_creator(char **splitted, char const *s, char c)
{
	int	counter;
	int	i;
	int	j;

	counter = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			counter++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				splitted[j] = malloc(sizeof(char) * (counter + 1));
				j++;
				counter = 0;
			}
			i++;
		}
	}
}

void	fill_array(char **splitted, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = -1;
	k = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != c && s[i])
		{
			if (i == 0 || s[i - 1] == c)
				j++;
			splitted[j][k] = s[i];
			k++;
			if (s[i + 1] == c || s[i + 1] == '\0')
				splitted[j][k] = '\0';
			i++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		word_count;

	word_count = word_counter(s, c);
	splitted = malloc(sizeof(char *) * (word_count + 1));
	if (!splitted)
		return (NULL);
	splitted[word_count] = NULL;
	secondary_array_creator(splitted, s, c);
	fill_array(splitted, s, c);
	return (splitted);
}

/**
int	main(void)
{
	char	**table;
	char	*str = "__Hellow_Worl_d__jkekodeldl_j";
	char	c = '_';
	int		i = 0;

	table = ft_split(str, c);
	while (table[i] != NULL)
	{
	printf("%s\n", table[i]);
		i++;
	}
}
**/
