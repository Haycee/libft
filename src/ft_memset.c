/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:29:05 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/02 16:43:34 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
	printf("%d", str);	
}

int main(void)
{
	char *str = "this is a test";
	ft_memset(str, '$', 7 * sizeof(char));
	printf("%s", str);
}
