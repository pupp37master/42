/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:59:33 by mhild             #+#    #+#             */
/*   Updated: 2022/12/29 11:28:47 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*f(unsigned int index, char *s)
{
	if (*(s + index) >= 'a' && *(s + index) <= 'z')
		*(s + index) = ft_toupper(*(s + index));
	else if (*(s + index) >= 'A' && *(s + index) <= 'Z')
		*(s + index) = ft_tolower(*(s + index));
	return ((void *) s + index);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		i++;
	}
}
