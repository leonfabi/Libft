/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:07:09 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/22 17:40:23 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*src1;
	unsigned const char	*src2;

	src1 = s1;
	src2 = s2;
	if (n==0)
		return (0);
	else
	{
		while(n > 0 && (*src1 - *src2) == 0)
		{
			n--;
			src1++;
			src2++;
		}
		return (*src1 - *src2);
	}
}
