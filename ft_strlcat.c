/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:56:51 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:13:13 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	counter;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	counter = 0;
	//size = size - dst_l;
	while (size > counter)
	{
		dst[dst_l + counter] = src[counter];
		counter++;
	}
	return (dst_l + src_l);
}
