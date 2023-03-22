/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:26:15 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/22 12:59:36 by singerporsc      ###   ########.fr       */
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
	//char	string_ft_bzero[] = "123456789";
	//char	string_bzero[] = "123456789";
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
	char	str_memcpy[] = "#sdf6789";
	counter = 0;
	while (counter < 12)
	{
		ft_memcpy(dst_ft, str_memcpy, counter);
		memcpy(dst, str_memcpy, counter);
		if (strncmp(dst, dst_ft, 10) != 0)
		{
			printf("ft:");
			ft_putendl_fd(dst_ft, 1);
			printf("std:");
			ft_putendl_fd(dst, 1);
		}
		counter++;
	}
	//putstr
	printf("___putstr_fd\n");
	/*char	str_ft_putstr_fd[] = "Dies ist ein Test!";
	ft_putstr_fd(str_ft_putstr_fd, 1);
	putendl*/
	printf("___putendl_fd\n");
	/*char	str_ft_putendl_fd[] = "Dies ist auch ein Test!";
	ft_putendl_fd(str_ft_putendl_fd, 1);
	strncmp*/
	printf("___strncmp\n");
	char	string_strncmp1[] = "23456";
	char	string_strncmp2[] = "123";
	int		ft = ft_strncmp(string_strncmp1, string_strncmp2, 2);
	int		std = strncmp(string_strncmp1, string_strncmp2, 2);
	counter = -10;
	while (counter < 10)
	{
		ft = ft_strncmp(string_strncmp1, string_strncmp2, counter);
		std = strncmp(string_strncmp1, string_strncmp2, counter);
		if (ft != std)
		{
			printf("counter: %d | %s | %s | ft_strncmp: %d | strncmp: %d\n", counter, string_strncmp1, string_strncmp2, ft, std);
		}
		counter++;
	}
	/*printf("___memmove\n");
	char	string_strncmp1[] = "23456";
	char	string_strncmp2[] = "123";*/
	printf("___strlcpy\n");
	char	str_strlcpy[] = "12sdfg()";
	char	*str_dst =	(char*) malloc(19);
			str_dst = strncpy(str_dst, str_strlcpy, 1);
	char	*str_ft_dst =	(char*) malloc(19);
	int		ft_sl = ft_strlcpy(str_ft_dst, str_strlcpy, 1);
	counter = 0;
	while (counter <= (int) strlen(str_strlcpy) + 1)
	{
		ft_sl = ft_strlcpy(str_ft_dst, str_strlcpy, counter);
		str_dst = strncpy(str_dst, str_strlcpy, counter);
		if (1)//strncmp(str_dst, str_ft_dst, strlen(str_dst)) != 0)
			printf("counter: %d | strlcpy: %s | ft_strlcpy: %s | ouput_ft: %d\n", counter, str_dst, str_ft_dst, ft_sl);
		counter++;
	}
	printf("___strlcat\n");
	char	str_c[] = "456789";
	char	*dst_c;
	char	*dst_ft_c;
	counter = 0;
	while (counter <= (int) strlen(str_c) + 1)
	{
		dst_c = (char*) malloc(10);
		dst_c[0] = '1';
		dst_c[1] = '2';
		dst_c[2] = '3';
		dst_ft_c = (char*) malloc(10);
		dst_ft_c[0] = '1';
		dst_ft_c[1] = '2';
		dst_ft_c[2] = '3';
		ft_sl = ft_strlcat(dst_ft_c, str_c, counter);
		dst_c = strncat(dst_c, str_c, counter);
		if (1)//strncmp(str_dst, str_ft_dst, strlen(str_dst)) != 0)
			printf("counter: %d | strncat: %s | ft_strlcat: %s | ouput_ft: %d\n", counter, dst_c, dst_ft_c, ft_sl);
		counter++;
	}
	//toupper
	printf("___toupper\n");
	counter = 0;
	int	ft_up = 0;
	int	up = 0;
	while (counter <= 127)
	{
		ft_up = ft_toupper(counter);
		up = toupper(counter);
		if(up != ft_up)
			printf("counter: %d | toupper: %c | ft_toupper: %c", counter, up, ft_up);
		counter++;
	}
	//tolower
	printf("___tolower\n");
	counter = 0;
	int	ft_dn = 0;
	int	dn = 0;
	while (counter <= 127)
	{
		ft_dn = ft_tolower(counter);
		dn = tolower(counter);
		if(dn != ft_dn)
			printf("counter: %d | tolower: %c | ft_tolower: %c", counter, dn, ft_dn);
		counter++;
	}
	//strchr
	printf("___strchr\n");
	char	str_chr[] = "1A12ABC";
	char	chr = 'A';
	char	*ptr_ft;
	char	*ptr;
	ptr_ft = ft_strchr(str_chr, chr);
	ptr = strchr(str_chr, chr);
	if (ptr && ptr_ft)
		printf("ft: %c | std: %c\n", *ptr_ft, *ptr);
	/*ptr++;
	ptr_ft++;
	printf("ft: %c | std: %c\n", *ptr_ft, *ptr);*/
	//strrchr
	printf("___strrchr\n");
	char	str_rchr[] = "1A12ABC";
	char	rchr = 'A';
	char	*ptr_rft;
	char	*ptrr;
	ptr_rft = ft_strrchr(str_rchr, rchr);
	ptrr = strrchr(str_rchr, rchr);
	if (ptrr && ptr_rft)
		printf("ft: %c | std: %c\n", *ptr_rft, *ptrr);
	ptrr--;
	ptr_rft--;
	printf("ft: %c | std: %c\n", *ptr_rft, *ptrr);
	return (0);
}
