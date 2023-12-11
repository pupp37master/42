/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:40:39 by mhild             #+#    #+#             */
/*   Updated: 2022/12/12 18:40:39 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	tick;

	i = 0;
	tick = 0;
	while (s1[i])
	{	
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				tick++;
				break ;
			}
			j++;
		}
		if (set[j] == 0)
			return (i);
		i++;
	}
	if (tick == i)
		return (i);
	return (0);
}

static size_t	check_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	i = ft_strlen(s1);
	while (i--)
	{	
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == 0)
			return (count);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimd;
	size_t	start_len;
	size_t	end_len;
	size_t	tot_len;
	size_t	i;

	start_len = check_start(s1, set);
	if (start_len < ft_strlen(s1))
		end_len = check_end(s1, set);
	else
		end_len = 0;
	tot_len = start_len + end_len;
	trimd = malloc (ft_strlen(s1) - tot_len + 1);
	if (trimd == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1) - tot_len)
	{
		*(trimd + i) = *(s1 + start_len);
		i++;
		start_len++;
	}
	*(trimd + i) = 0;
	return (trimd);
}
