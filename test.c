/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:26:15 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/20 17:26:26 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	int	counter;
	int	is;
	int	should;

	is = 0;
	should = 0;
	//isalpha
	printf("___isalpha\n");
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
	printf("___isalnum\n");
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
	printf("___isascii\n");
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
	printf("___isdigit\n");
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
	printf("___isprint\n");
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
	//STRINGS
	printf("___strlen\n");
	char	string[] = "123456";
	printf("ft_strlen: %ld\n", ft_strlen(string));
	printf("strlen: %ld\n", strlen(string));
	//MEMSET
	printf("___memset\n");
	char	string1[] = "Hallo dies ist ein Test";
	int		array[] = {1,2,3,4,5,6};
	printf("String: %s\n", string1);
	memset(string1, 'X', 3 * sizeof(char));
	printf("Memset: %s\n", string1);
	for (int i=0; i<6; i++)
		printf("Array: %d\n ", array[i]);
	memset(array, 1, 2 * sizeof(array[0]));
	for (int i=0; i<6; i++)
		printf("Memset: %d\n ", array[i]);
	//BZERO
	printf("___bzero\n");
	int		counter1 = 0;
	char	string_ft_bzero[] = "123456789";
	char	string_bzero[] = "123456789";
	//printf("String: %s\n", string_ft_bzero);
	while (counter < 100)
	{
		char	string_ft_bzero[] = "123456789";
		char	string_bzero[] = "123456789";
		ft_bzero(string_ft_bzero, counter);
		bzero(string_bzero, counter);
		counter1 = 0;
		while (counter1 < 6)
		{
			if (string_ft_bzero[counter1] != string_bzero[counter1])
				printf("S: %d, ft_bzero: %c, bzero: %c\n", counter1, string_ft_bzero[counter1], string_bzero[counter1]);
			counter1++;
		}
		counter++;
	}
	/*counter = 0;
	printf("ft_bzero\n");
	while (counter < 6)
	{
		printf("S: %d, W: %c\n", counter, string_ft_bzero[counter]);
		counter++;
	}
	printf("bzero\n");
	counter = 0;
	while (counter < 6)
	{
		printf("S: %d, W: %c\n", counter, string_bzero[counter]);
		counter++;
	}*/
	printf("___memcpy\n");
	void	*dst = malloc(10);
	void	*dst_ft = malloc(10);
	char	str_memcpy[] = "0123456789";
	counter = 0;
	while (counter < 12)
	{
		ft_memcpy(dst_ft, str_memcpy, counter);
		memcpy(dst, str_memcpy, counter);
	}
	ft_putendl_fd(dst, 1);
	//putstr
	printf("___putstr_fd\n");
	char	str_ft_putstr_fd[] = "Dies ist ein Test!";
	ft_putstr_fd(str_ft_putstr_fd, 1);
	//putendl
	printf("\n___putendl_fd\n");
	char	str_ft_putendl_fd[] = "Dies ist auch ein Test!";
	ft_putendl_fd(str_ft_putendl_fd, 1);
	return (0);
}
