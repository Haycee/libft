/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:47:04 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/11 16:57:07 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	printf("si");
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	printf("size : %d\n", size);
	return (size);
}
