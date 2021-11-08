/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:05:29 by agirardi          #+#    #+#             */
/*   Updated: 2021/11/08 14:58:34 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
