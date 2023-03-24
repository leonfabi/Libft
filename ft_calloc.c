/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:44:22 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 15:30:02 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	res;

	res = nmemb * size;
	if (nmemb != 0 && res / nmemb != size)
		return (NULL);
	pointer = malloc(nmemb * size);//check if overflow when nmemb and size close to max
	if (pointer == NULL)
		return (NULL);
	ft_memset(pointer, 0, nmemb);
	return (pointer);
}
