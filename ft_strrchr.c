/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:14:32 by mhild             #+#    #+#             */
/*   Updated: 2022/12/28 17:46:02 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	s += len;
	while (len >= 0)
	{
		if (*s == (const char) c)
			return ((char *) s);
		s--;
		len--;
	}
	return (NULL);
}
