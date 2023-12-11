/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:07:37 by mhild             #+#    #+#             */
/*   Updated: 2022/12/31 16:22:49 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// wenn cdest hinter csrc liegt (im gleichen string), 
// können sie überlappen desh rückwärts kopieren

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = (char *) dst;
	csrc = (const char *) src;
	if (dst == src)
		return (dst);
	if (cdest > csrc)
	{
		while (n--)
			*(cdest + n) = *(csrc + n);
	}
	else
		ft_memcpy(cdest, csrc, n);
	return (dst);
}
