/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:13:29 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 19:57:07 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char const	*source;

	destination = dest;
	source = src;
	while(n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (destination);
}
