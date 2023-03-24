/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:20:49 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/24 13:15:56 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		sections(char const *s, char c)
{
	int	start;
	int	end;
	int	len;

	start = 0;
	end = 0;
	len = 0;
	while (s[start])
	{
		if (s[start] == c)
			start++;
		else
		{
			end = start;
			while (s[end] != c && s[end])
				end++;
			len += 1;
			if (!s[end])
				start = end;
			else
				start = end + 1;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**array;

	len = sections(s, c);
	array = (char **)calloc(len + 1, sizeof(char *));
	
}