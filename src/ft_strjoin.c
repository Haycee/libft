#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	// CHECK S1 S2
	i = 0;
	j = 0;
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/**
#include <stdio.h>

int	main(void)
{
	char *str1 = "Hello ";
	char *str2 = "World !";
	char *str3;

	str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
}
**/
