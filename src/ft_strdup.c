#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	copy = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
#include <stdio.h>

int	main(void)
{
	char *str = "Hello World !";
	char *copy;

	copy = ft_strdup(str);
	printf("copy : %s\n", copy);
}
**/
