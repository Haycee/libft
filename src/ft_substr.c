#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

/**
#include <stdio.h>

int main(void)
{
    char *str = "Hello World !";
    char *b;
    b = ft_substr(str, 2, sizeof(char) * 9);
    printf("Substring : %s\n", b);
}
**/
