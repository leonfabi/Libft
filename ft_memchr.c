/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:43:10 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 17:06:40 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = s;
	while(n > 0 && *pointer != c)
	{
		pointer++;
		n--;
	}
	if(*pointer == c)
		return (pointer);
	return (NULL);
}
