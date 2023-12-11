/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:08:53 by mhild             #+#    #+#             */
/*   Updated: 2022/12/28 17:36:43 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	llen = ft_strlen(little);
	if (llen == 0)
		return ((char *) big);
	if (llen == ft_strlen(big) && ft_strncmp(little, big, len) == 0
		&& len > 0 && len == llen)
		return ((char *) big);
	i = 0;
	while (*(big + i))
	{
		j = 0;
		while (little[j] == big[i + j] && i + j != len && big[i + j]
			&& little[j])
			j++;
		if (i + j == len && j != llen)
			return (0);
		if (j == llen)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
