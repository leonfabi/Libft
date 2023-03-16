/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:26:15 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/16 17:47:54 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	counter;
	int	is;
	int	should;

	counter = 0;
	is = 0;
	should = 0;
	while (counter < 300)
	{
		is = ft_isalpha(counter);
		should = isalpha(counter);
		if (is != should)
		{
			printf("Ft_isalpha: %d isalpha: %d\n", is, should);
		}
		counter++;
	}
	return (1);
}
