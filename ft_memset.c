/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:20 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/18 06:58:13 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memset(void *s, int c, size_t n)
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
