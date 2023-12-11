/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:47:52 by mhild             #+#    #+#             */
/*   Updated: 2022/12/29 11:27:48 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*f(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (&c);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (&c);
	}
	return (&c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	newstr = malloc (ft_strlen(s) + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(newstr + i) = f(i, s[i]);
		i++;
	}
	*(newstr + i) = 0;
	return (newstr);
}
