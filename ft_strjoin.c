/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:47:49 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/20 08:36:14 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;
	char	*str;

	index = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char*) malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return (NULL);
	while (index < s1_len)
	{
		str[index] = s1[index];
		index++;
	}
	while (index < s1_len + s2_len)
	{
		str[index] = s2[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
