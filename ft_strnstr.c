/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:17:54 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/27 19:14:30 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	ib;
	size_t	il;

	ib = 0;
	il = 0;
	if (!*s2)
		return ((char *)s1);
	if (len > 0)
	{
		while (s1[ib] && ib < len)
		{
			while (s1[ib + il] == s2[il] && (il + ib) < len && s1[ib + il])
				il++;
			if (il == ft_strlen(s2))
				return ((char *)&(s1[ib]));
			else
				il = 0;
			ib++;
		}
	}
	return (NULL);
}
