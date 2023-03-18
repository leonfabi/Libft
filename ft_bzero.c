/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:35 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/18 06:57:47 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	bzero(void *s, size_t n)
{
	char	*pointer;

	pointer = s;
	while(n)
	{
		*pointer++ = '\0';
		n--;
	}
}
