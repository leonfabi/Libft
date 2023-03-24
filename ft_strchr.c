/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:07:52 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:14:41 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*pointer;

	pointer = s;
	while (*pointer && *pointer != c)
		pointer++;
	if (*pointer == c)
		return ((char *) pointer);
	return (NULL);
}
