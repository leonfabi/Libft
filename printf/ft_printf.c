/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:11:01 by fkrug             #+#    #+#             */
/*   Updated: 2023/04/24 20:43:58 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_type(va_list ap, const char *string, int *print)
{
	if (string[1] == 'c')
		ft_putchar_print(va_arg(ap, int), print);
	else if (string[1] == 's')
		ft_putstr_print(va_arg(ap, char *), print);
	else if (string[1] == 'd' || string[1] == 'i')
		ft_putnbr_print(va_arg(ap, int), print);
	else if (string[1] == '%')
		ft_putchar_print('%', print);
	else if (string[1] == 'u')
		ft_putnbr_print(va_arg(ap, unsigned int), print);
	else if (string[1] == 'x')
		ft_xtoa_l_print(va_arg(ap, unsigned int), print);
	else if (string[1] == 'X')
		ft_xtoa_u_print(va_arg(ap, unsigned int), print);
	else if (string[1] == 'p')
		ft_putptr_print(va_arg(ap, char *), print);
}

int	ft_printf(const char *string, ...)
{
	va_list		ptr;
	int			count;
	int			print;

	count = 0;
	print = 0;
	va_start(ptr, string);
	if (!string)
		return (0);
	while (string[count])
	{
		if (!string[count + 1] && string[count] == (int)37)
			break ;
		if (string[count] != (int)37)
			ft_putchar_print(string[count], &print);
		else if (string[count] == (int)37)
		{
			ft_type(ptr, &string[count], &print);
			count++;
		}
		count++;
	}
	va_end(ptr);
	return (print);
}
