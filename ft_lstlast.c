/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:07:28 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/11 17:49:35 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/**

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_lstadd_front(&list, ft_lstnew((int *)1));
	ft_lstadd_front(&list, ft_lstnew((int *)2));
	ft_lstadd_front(&list, ft_lstnew((int *)3));

	t_list *last = ft_lstlast(list);

	printf("list = %d\n", (int)list->content);
	printf("last = %d\n", (int)last->content);
	return (0);
}

**/
