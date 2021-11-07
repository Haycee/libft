int ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	if (nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
