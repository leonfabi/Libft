/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:04:16 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/23 15:56:05 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*start;

	start = (t_list*)malloc(sizeof(t_list));
	if (start == NULL)
		return (NULL);
	start->content = content;
	start->next = NULL;
	return (start);
}
