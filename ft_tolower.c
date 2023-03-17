/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:06:33 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/17 16:07:19 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
