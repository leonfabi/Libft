/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:23:52 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:12:42 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	while (size > 1)
	{
		dst[counter] = src[counter];
		counter++;
		size--;
	}
	dst[counter] = '\0';
	return (ft_strlen(src));
}
