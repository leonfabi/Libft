/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:37:35 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 16:42:47 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*src1;
	char	*src2;

	src1 = s1;
	src2 = s2;
	while(n > 0 && (*src1 - *src2) == 0 && *src1)
	{
		n--;
		src1++;
		src2++;
	}
	return (*src1 - *src2);
}
