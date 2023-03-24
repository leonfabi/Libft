/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:43:26 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/20 08:57:31 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		length;
	int		calc;
	int		sign;
	char	*str;

	calc = n;
	length = 0;
	sign = 0;
	if (calc < 0)
		sign = 1;
	while (calc)
	{
		length++;
		calc /= 10;
	}
	str = (char*) malloc(length + 1 + sign);
	if(str == NULL)
		return (NULL);
	str[length + sign] = '\0';
	if(sign)
		str[0] = '-';
	calc = n;
	while((length + sign) >= sign)
	{
		str[length + sign] = calc % 10;
		calc /= 10;
		length--;
	}
	return (str);
}