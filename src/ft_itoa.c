/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:22:47 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/09 11:21:20 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_digits(int num, int sign)
{
	int	digits;

	digits = 0;
	while (num != 0)
	{
		num /= 10;
		digits++;
	}
	if (sign == -1)
		digits++;
	return (digits);
}

char	*fill_digits(long int num, int digits, int sign, char *result)
{
	result[digits] = '\0';
	while (digits != 0)
	{
		digits--;
		result[digits] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		result[digits] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			digits;
	int			sign;
	char		*result;

	num = n;
	sign = 1;
	if (num < 0)
	{
		num *= -1;
		sign = -1;
	}
	digits = find_digits(num, sign);
	result = malloc(digits * sizeof(char) + 1);
	if (!result)
		return (NULL);
	fill_digits(num, digits, sign, result);
	return (result);
}

/**
#include <stdio.h>

int main(void)
{
	int num = -123456789;
	int num2 = 123456789;
	int num3 = 2147483647;
	int num4 = -2147483648;

	printf("\n\nRESULT : %s\n", ft_itoa(num));
	printf("RESULT : %s\n", ft_itoa(num2));
	printf("RESULT : %s\n", ft_itoa(num3));
	printf("RESULT : %s\n", ft_itoa(num4));
}
**/
