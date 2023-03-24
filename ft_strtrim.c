/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:59:54 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/24 11:14:22 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char c, char const *set)
{
	int	subset;

	subset = 0;
	while (set)
	{
		if (c == *set)
			subset = 1;
		set++;
	}
	return (subset);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;
	
	start = 0;
	end = 0;
	while (isset(s1[start], set))
		start++;
	if (s1[start] == NULL)
		return (NULL);
	end = start;
	while (!isset(s1[end], set) && s1[end])
		end++;
	if (!s1[end])
		end--;
	trim = (char *)malloc(end - start + 2);
	ft_strlcpy(trim, set[start], end - start + 1);
	return (trim);
}
