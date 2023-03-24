/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:28:26 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 08:59:17 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	const char	*pointer;

	size = ft_strlen(s);
	pointer = s + size - 1;//size - 1 in eckigen ?
	while(*pointer != c && size > 0)
	{
		pointer--;
		size--;
	}
	if(*pointer == c)
		return ((char*)pointer);
	return (NULL);
}
