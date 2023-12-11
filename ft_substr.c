/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:27:45 by mhild             #+#    #+#             */
/*   Updated: 2022/12/29 11:21:13 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	char			*subs;
	unsigned int	subs_len;

	subs_len = ft_strlen(s) - start;
	if (start < ft_strlen(s))
	{
		if (subs_len < len)
			subs = ft_calloc (subs_len + 1, 1);
		else
			subs = ft_calloc (len + 1, 1);
		s = s + start;
		i = 0;
		while (*s && len--)
		{
			*(subs + i) = *(s);
			s++;
			i++;
		}
		return (subs);
	}
	return (ft_calloc(1, 1));
}
