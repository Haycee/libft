/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memmove.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: agirardi <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 10:27:06 by agirardi		  #+#	#+#			 */
/*   Updated: 2021/11/03 14:52:29 by agirardi		 ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
