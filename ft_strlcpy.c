/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:23:52 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 15:56:19 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	while(size-- > 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
}
