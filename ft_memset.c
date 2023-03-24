/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:20 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:16:18 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;

	pointer = s;
	while (n)
	{
		//*(pointer + n - 1) = c;
		*pointer++ = c;
		n--;
	}
	return (s);
}
