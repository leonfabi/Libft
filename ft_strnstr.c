/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:56:30 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:09:28 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		index1;
	size_t		index2;

	index1 = 0;
	index2 = 0;
	while (index1 < len && s1[index1 + index2])
	{
		while (s1[index1 + index2] == s2[index2] && (index1 + index2) < len)
			index2++;
		if (index2 == ft_strlen(s2))
			return ((char *) &s1[index1]);
		else
			index2 = 0;
		index1++;
	}
	return (NULL);
}
