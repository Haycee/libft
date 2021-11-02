/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:29:05 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/02 16:28:07 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	*str = 'a';
}

#include <stdio.h>

int main(void)
{
	char *str = "this is a test";
	ft_memset(str, '$', 7);
	printf("%s", str);
}
