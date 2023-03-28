/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:47:39 by fkrug             #+#    #+#             */
/*   Updated: 2023/03/28 16:36:25 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


int	ft_l(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

//END
void	ft_putnbr_fd(int n, int fd)
{
	int		length;
	char	str[12];
	size_t	nbr;

	nbr = n;
	ft_bzero(str,12);
	length = ft_l(n);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	while (nbr)
	{
		str[length - 1] = nbr % 10 + '0';
		nbr /= 10;
		length--;
	}
	ft_putstr_fd(str, fd);
}
/*int	main(void)
{
	ft_putnbr_fd(2,1);
	return (0);
}*/