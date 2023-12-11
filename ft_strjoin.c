/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:11:12 by mhild             #+#    #+#             */
/*   Updated: 2022/12/31 16:15:52 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*subs;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	subs = malloc (ls1 + ls2 + 1);
	if (!subs)
		return (NULL);
	ft_memcpy(subs, s1, ls1);
	ft_memcpy(subs + ls1, s2, ls2);
	*(subs + ls1 + ls2) = '\0';
	return (subs);
}
