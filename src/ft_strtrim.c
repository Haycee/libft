#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_charset(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if(s1[start] == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;
	int		j;
	start = 0;
	while(is_charset(s1, set, start))
		start++;
	end = ft_strlen(s1) - 1;
	while(is_charset(s1, set, end))
		end--;
	trimmed = malloc(sizeof(char) * (end - start) + 2);
	i = 0;
	j = start;
	while (i < end - start + 1)
	{
		trimmed[i] = s1[j];
		i++;
		j++;
	}
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}


/**
int	main(void)
{
	char	*str_trimmed;
	str_trimmed = ft_strtrim("______e______Hello World!_______e____", "___");
	printf("%s\n", str_trimmed);
	str_trimmed = ft_strtrim("______e______Hello World!", "___");
	printf("%s\n", str_trimmed);
	str_trimmed = ft_strtrim("____________Hello World!_______e____", "___");
	printf("%s\n", str_trimmed);
	str_trimmed = ft_strtrim("aaaaaaa_Hello___bc", "abc");
	printf("%s\n", str_trimmed);
	str_trimmed = ft_strtrim("abc_______Hello__abc", "abc");
	printf("%s\n", str_trimmed);
	str_trimmed = ft_strtrim("abcHelloabc", "abc");
	printf("%s\n", str_trimmed);
}
**/
