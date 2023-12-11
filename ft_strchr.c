/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:51:57 by mhild             #+#    #+#             */
/*   Updated: 2022/12/29 11:29:23 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	if (c == 0)
		return ((char *) s + ft_strlen(s));
	while (*ptr && *ptr != (char) c)
		ptr++;
	if (*ptr == (char) c)
		return (ptr);
	return (NULL);
}
