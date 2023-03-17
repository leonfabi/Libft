/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:26:15 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/17 07:23:00 by singerporsc      ###   ########.fr       */
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

	is = 0;
	should = 0;
	//isalpha
	printf("isalpha\n");
	counter = -100;
	while (counter < 1000)
	{
		is = ft_isalpha(counter);
		should = isalpha(counter);
		if ((is != should) && (should == 0))
		{
			printf("Value: %c Ft_isalpha: %d isalpha: %d\n",(char) counter, is, should);
		}
		counter++;
	}
	printf("isalnum\n");
	counter = -100;
	while (counter < 1000)
	{
		is = ft_isalnum(counter);
		should = isalnum(counter);
		if ((is != should) && (should == 0))
		{
			printf("Value: %c Ft_isalnum: %d isalnum: %d\n",(char) counter, is, should);
		}
		counter++;
	}
	printf("isascii\n");
	counter = -100;
	while (counter < 1000)
	{
		is = ft_isascii(counter);
		should = isascii(counter);
		if ((is != should) && (should == 0))
		{
			printf("Value: %c Ft_isascii: %d isascii: %d\n",(char) counter, is, should);
		}
		counter++;
	}
	printf("isdigit\n");
	counter = -100;
	while (counter < 1000)
	{
		is = ft_isdigit(counter);
		should = isdigit(counter);
		if ((is != should) && (should == 0))
		{
			printf("Value: %c Ft_isdigit: %d isdigit: %d\n",(char) counter, is, should);
		}
		counter++;
	}
	printf("isprint\n");
	counter = -100;
	while (counter < 1000)
	{
		is = ft_isprint(counter);
		should = isprint(counter);
		if ((is != should) && (should == 0))
		{
			printf("Value: %d Ft_isprint: %d isprint: %d\n", counter, is, should);
		}
		counter++;
	}
	return (0);
}
