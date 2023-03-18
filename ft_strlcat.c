/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:56:51 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 20:16:28 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t		counter;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	counter = 0;
	while(size > counter)
	{
		dst[dst_l + counter] = src[src_l + counter];
		counter++;
	}
	return (dst_l + src_l);
}
