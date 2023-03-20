/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:34:00 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/20 12:42:24 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int sign;

	n = 0;
	sign = 1;
	while (!(ft_isdigit((int) *nptr)) &&  *nptr != '-')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	while (nptr)
	{
		n *= 10;
		n = (int) *nptr - 48;
		nptr++;
	}
	n *= sign;
	return (n);
}
