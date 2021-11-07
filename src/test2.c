#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*find_size(char const *s1, char const *set, int size[])
{
	int	set_size;
	int	start;
	int	end;
	int	i;

	size[0] = 0;
	size[1] = 0;
	set_size = ft_strlen(set);
	start = 0;
	end = ft_strlen(s1);
	while (start < set_size && s1[start] == set[start])
		start++;
	if (start == set_size)
	{
		size[0] += set_size;
		size[1] = 1;
	}
	i = ft_strlen(set) - 1;
	while (i >= 0 && s1[end - 1] == set[i])
	{
		end--;
		i--;
	}
	if (i == -1)
		size[0] += set_size;
	size[0] = ft_strlen(s1) - size[0];
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		size[2];
	int		i;
	int		j;

	find_size(s1, set, size);
	trimmed = malloc(sizeof(char) * (size[0] + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	if (size[1] == 1)
		i = ft_strlen(set);
	j = 0;
	while (j < size[0])
	{
		trimmed[j] = s1[i];
		j++;
		i++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "______Hello World!______";
	char	*set = "___";
	char	*str_trimmed;

	str_trimmed = ft_strtrim(str, set);
	printf("%s\n", str_trimmed);
}
