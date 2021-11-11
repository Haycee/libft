#include "libft.h"
#include <stdio.h>

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
