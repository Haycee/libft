/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstlast.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: agirardi <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/10 11:53:50 by agirardi		  #+#	#+#			 */
/*   Updated: 2021/11/10 13:07:09 by agirardi		 ###   ########lyon.fr   */
/*																			*/
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
