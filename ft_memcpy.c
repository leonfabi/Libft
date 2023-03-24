/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:06:02 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 10:54:49 by fkrug            ###   ########.fr       */
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
