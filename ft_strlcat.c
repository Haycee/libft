/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strlcat.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: agirardi <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/03 12:56:53 by agirardi		  #+#	#+#			 */
/*   Updated: 2021/11/03 12:58:37 by agirardi		 ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_init;
	size_t	src_init;
	size_t	i;
	size_t	j;

	dest_init = ft_strlen(dest);
	src_init = ft_strlen(src);
	i = dest_init;
	j = 0;
	if (size == 0)
		return (src_init);
	if (size <= dest_init)
		return (src_init + size);
	while (j < size - dest_init - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_init + dest_init);
}
