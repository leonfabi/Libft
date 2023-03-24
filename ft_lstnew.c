/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrug <fkrug@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:04:16 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/24 14:21:01 by fkrug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*start;

	start = (t_list *)malloc(sizeof(t_list));
	if (start == NULL)
		return (NULL);
	start->content = content;
	start->next = NULL;
	return (start);
}
