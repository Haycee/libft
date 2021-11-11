#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_lstadd_front(&list, ft_lstnew("1"));
	ft_lstadd_front(&list, ft_lstnew("2"));
	ft_lstadd_front(&list, ft_lstnew("3"));
	ft_lstadd_front(&list, ft_lstnew("4"));
	ft_lstadd_front(&list, ft_lstnew("5"));
	int i = 0;
	while (i < 2)
	{
		list = list->next;
		i++;
	}
	ft_lstclear(&list);
	return (0);
}
