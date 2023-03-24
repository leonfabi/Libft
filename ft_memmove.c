/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:13:29 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:18:20 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destination;
	char const	*source;

	destination = dest;
	source = src;
	while (n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (destination);
}
