/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:07:32 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/27 20:15:07 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	char const		*str;
	unsigned int	index;

	index = 0;
	str = s;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[start] && index < len)
	{
		substr[index] = str[start];
		start++;
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
