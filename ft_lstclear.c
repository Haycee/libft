/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:21:58 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/11 19:18:06 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst)
		return ;
	while ((*lst))
	{
		ft_lstdelone(*lst, (del));
		*lst = (*lst)->next;
	}
	*lst = NULL;
}


/**
Parameters 	#1. The address of a pointer to an element.
			#2. The address of the function used to delete
				the content of the element.

Deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3).
**/
