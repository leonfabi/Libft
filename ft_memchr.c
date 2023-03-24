/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:43:10 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:19:24 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*pointer;

	pointer = s;
	while (n > 0 && *pointer != c)
	{
		pointer++;
		n--;
	}
	if (*pointer == c)
		return ((char *) pointer);
	return (NULL);
}
