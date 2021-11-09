#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	**table;
	int i = 0;
	char s[] = "                  olol";
	table = ft_split(s, ' ');
	while (table[i])
	{
		printf("%s\n", table[i]);
		i++;
	}
}
