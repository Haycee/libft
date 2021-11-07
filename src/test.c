#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void *ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	int		total;

	total = nmemb * size;
	result = malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}

static int	ischar(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
		if (*(set + i++) == c)
			return (1);
	return (0);
}

static char	*trimming(const char *s1, const char *set, size_t *k, size_t i)
{
	size_t	j;
	size_t	len;
	char	*dst;

	len = ft_strlen(s1);
	j = 0;
	while (ischar(*(s1 + len - j - 1), set))
		j++;
	if ((dst = ft_calloc(sizeof(char), len - (j + i) + 1)) == NULL)
		return (NULL);
	while (*k < len - (j + i))
	{
		*(dst + *k) = *(s1 + i + *k);
		*k += 1;
	}
	return (dst);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*dst;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ischar(*(s1 + i), set))
		i++;
	k = 0;
	if (i == len)
		dst = malloc(1);
	else
		dst = trimming(s1, set, &k, i);
	if (dst != NULL)
		*(dst + k) = '\0';
	return (dst);
}


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
