#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("Hello world !", "!"));
	printf("%s\n", ft_strtrim("Hello world !", "Helo"));
	printf("%s\n", ft_strtrim("Hello world !", " !"));
	printf("%s\n", ft_strtrim("Hello world !", ""));
}

// atoi //
/**
int	main(void)
{
	char n[40] = "99999999999999999999999999";
	int result = atoi(n);
	printf("result : %d", result);
}
**/
