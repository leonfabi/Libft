/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:28:26 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 18:10:38 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		size;
	const char	*pointer;

	size = ft_strlen(s);
	pointer = &s[size];
	while (*pointer != (char)c && size > 0)
	{
		pointer--;
		size--;
	}
	if (*pointer == (char)c)
		return ((char *)pointer);
	return (NULL);
}
