/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:20 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 13:56:31 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memset(void *s, int c, size_t n)
{
	int	counter;
	int	*pointer;

	counter = 0;
	pointer = s;
	while((n - counter) > 0)
	{
		*(pointer + counter * 4) = c;
		counter++;
	}
	return (s);
}
