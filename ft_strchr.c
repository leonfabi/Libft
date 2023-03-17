/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:07:52 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 16:27:48 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;
	int		counter;

	pointer = s;

	while(*pointer && *pointer != c)
		pointer++;
	if(*pointer == c)
		return (pointer);
	return (NULL);
}
