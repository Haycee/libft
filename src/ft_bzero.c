/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:56:55 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/03 10:25:44 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int main(void)
{
	int test[5] = {1, 15, 15, 16, 16};
	ft_bzero(test, 4 * sizeof(int));
	printf("%i %i %i %i\n", test[0], test[1], test[2], test[3]);
}
*/
