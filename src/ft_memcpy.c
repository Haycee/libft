/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:11:48 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/03 11:17:28 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/**
#include <stdio.h>
int main(void)
{
	int arr1[2] = {1, 2};
	int arr2[2] = {3, 4};
	ft_memcpy(arr1, arr2, 2 * sizeof(int));
	printf("%i %i\n", arr1[0], arr1[1]);
}
**/
