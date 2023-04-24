/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:36:50 by fkrug             #+#    #+#             */
/*   Updated: 2023/04/21 11:51:53 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *string, ...);

void	ft_xtoa_l_print(size_t integer, int *print);

void	ft_xtoa_u_print(size_t integer, int *print);

void	ft_putchar_print(char c, int *print);

void	ft_putstr_print(char *s, int *print);

size_t	ft_strlen(const char *s);

void	ft_putnbr_print(long n, int *print);

void	ft_putptr_print(void *ptr, int *print);

#endif
