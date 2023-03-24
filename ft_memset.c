/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:20 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/19 16:04:58 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;

	pointer = s;
	while(n)
	{
		//*(pointer + n - 1) = c;
		*pointer++ = c;
		n--;
	}
	return (s);
}
