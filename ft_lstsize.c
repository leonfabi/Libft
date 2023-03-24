/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:08:45 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/23 16:32:18 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*counter;

	size = 0;
	counter = lst;
	while(counter)
	{
		size++;
		counter = counter->next;
	}
	return (size);
}
