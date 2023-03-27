/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:43:26 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:22:33 by fkrug            ###   ########.fr       */
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
	str = (char *) malloc(length + 1 + sign);
	if (str == NULL)
		return (NULL);
	str[length + sign] = '\0';
	if (sign)
		str[0] = '-';
	calc = n;
	while ((length + sign) >= sign)
	{
		str[length + sign] = calc % 10;
		calc /= 10;
		length--;
	}
	return (str);
}
