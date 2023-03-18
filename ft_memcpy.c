/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:06:02 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 19:47:54 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	const char	*source;

	destination = dest;
	source = src;
	while(n-- > 0)
	{
		*destination++ = *source;
		source++;
	}
	return (dest);
}
