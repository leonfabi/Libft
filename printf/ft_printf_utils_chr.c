/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_chr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:45:44 by fkrug             #+#    #+#             */
/*   Updated: 2023/04/24 20:44:15 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar_print(char c, int *print)
{
	write(1, &c, 1);
	(*print)++;
}

void	ft_putstr_print(char *s, int *print)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		(*print) += 6;
	}
	else
	{
		write(1, s, ft_strlen(s));
		(*print) += ft_strlen(s);
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

void	ft_putptr_print(void *ptr, int *print)
{
	if (ptr != NULL)
	{
		ft_putstr_print("0x", print);
		ft_xtoa_l_print((size_t) ptr, print);
	}
	else
		ft_putstr_print("0x0", print);
}
