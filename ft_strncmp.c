/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:38:43 by mhild             #+#    #+#             */
/*   Updated: 2022/12/27 21:25:51 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *) s1;
	ucs2 = (unsigned char *) s2;
	while (n--)
	{
		if (*ucs1 != *ucs2 || *ucs1 == 0 || *ucs2 == 0)
			return (*ucs1 - *ucs2);
		ucs1++;
		ucs2++;
	}
	return (0);
}
