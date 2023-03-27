/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:07:32 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 09:29:10 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//Count from zero?

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	char const		*str;
	unsigned int	index;

	index = 0;
	str = s;
	substr = (char *)malloc(len - start + 1);
	if (substr == NULL)
		return (NULL);
	while (len - start + 1)
	{
		substr[index] = str[start];
		start++;
		index++;
	}
	return (substr);
}
