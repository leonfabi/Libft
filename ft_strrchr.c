/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:28:26 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 16:35:32 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	char	*pointer;

	size = ft_strlen(s);
	pointer = s + size - 1;
	while(*pointer != c && size > 0)
	{
		pointer--;
		size--;
	}
	if(*pointer == c)
		return (pointer);
	return (NULL);
}
