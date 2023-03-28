/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:20:49 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/28 12:48:49 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_sections(char const *s, char c)
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
int	ft_sect_start(char const *s, char c, int old_end)
{
	int	start;

	start = old_end + 1;
	while (s[start] == c)
		start++;
	return (start);
}
int	ft_sect_end(char const *s, char c, int old_start)
{
	int	end;

	end = old_start;
	while (s[end] != c && s[end])
		end++;
	end--;
	return (end);
}
char	**ft_split(char const *s, char c)
{
	int		len;
	char	**array;
	int		start;
	int		end;
	int		count;

	start = 0;
	end = -1;
	count = 0;
	len = ft_sections(s, c);
	array = (char **)ft_calloc(len + 1, sizeof(char *));
	while (count < len)
	{
		start = ft_sect_start(s, c, end);
		end = ft_sect_end(s, c, start);
		//printf("Abschnitte: %d\n Start: %d\n End: %d\n",count,start,end);
		array[count] = (char *)ft_calloc(start - end + 2, sizeof(char));
		ft_memmove(array[count], &s[start], start - end + 1);
		count++;
	}
	return (array);
}
/*int	main(void)
{
	char	str[] = "01z34z6z89";
	char	c = 'z';
	char	**test;
	test = ft_split(str,c);
	printf("Substring: %s",test[0]);
	return (0);
}*/