/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singerporsche <singerporsche@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:59:18 by singerporsc       #+#    #+#             */
/*   Updated: 2023/03/27 19:25:00 by singerporsc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
