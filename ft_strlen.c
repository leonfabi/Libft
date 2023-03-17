/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 07:31:16 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 07:43:19 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while(s[counter])
		counter++;
	return (counter);
}
