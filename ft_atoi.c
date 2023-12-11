/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:54 by mhild             #+#    #+#             */
/*   Updated: 2022/12/30 11:21:55 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(const char *c)
{
	int	i;

	i = 0;
	while (c[i] == ' ' || c[i] == '\t' || c[i] == '\v'
		|| c[i] == '\f' || c[i] == '\r' || c[i] == '\n')
		i++;
	return (i);
}

static int	check_sign(const char *c)
{
	if (*c == '-')
		return (-1);
	else if (*c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	spc;
	int	sign;

	spc = check_space(str);
	sign = check_sign(str + spc);
	if (sign != 0)
		str++;
	res = 0;
	while (*(str + spc) >= 48 && *(str + spc) <= 57)
	{
		res *= 10;
		res = res + *(str + spc) - 48;
		str++;
	}
	if (sign != 0)
		return (res * sign);
	return (res);
}
