/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:48:53 by fkrug             #+#    #+#             */
/*   Updated: 2023/04/21 11:52:11 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_print(long n, int *print)
{
	long	number;

	if (n < 0)
	{
		n *= -1;
		ft_putchar_print('-', print);
	}
	number = n % 10;
	if (n > 9)
	{
		ft_putnbr_print(n / 10, print);
		ft_putnbr_print(n % 10, print);
	}
	else
		ft_putchar_print(number + 48, print);
}

void	ft_xtoa_l_print(size_t integer, int *print)
{
	size_t	hex;

	hex = integer % 16;
	if (integer > 15)
	{
		ft_xtoa_l_print(integer / 16, print);
	}
	if (hex > 9)
		ft_putchar_print('a' + (hex - 10), print);
	else
		ft_putchar_print(hex + '0', print);
}

void	ft_xtoa_u_print(size_t integer, int *print)
{
	size_t	hex;

	hex = integer % 16;
	if (integer > 15)
	{
		ft_xtoa_u_print(integer / 16, print);
	}
	if (hex > 9)
		ft_putchar_print('A' + (hex - 10), print);
	else
		ft_putchar_print(hex + '0', print);
}
