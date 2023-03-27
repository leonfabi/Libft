/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:34:00 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:37:25 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (!(ft_isdigit((int) *nptr)) && *nptr != '-' && *nptr != '+')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		n *= 10;
		n = n + *nptr - 48;
		nptr++;
	}
	n *= sign;
	return (n);
}
