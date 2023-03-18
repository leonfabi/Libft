/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:07:52 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 19:47:03 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*pointer;

	pointer = s;

	while(*pointer && *pointer != c)
		pointer++;
	if(*pointer == c)
		return ((char*) pointer);
	return (NULL);
}
