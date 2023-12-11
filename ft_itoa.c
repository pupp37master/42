/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhild <mhild@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:23 by mhild             #+#    #+#             */
/*   Updated: 2022/12/29 11:30:55 by mhild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	else
		count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	ft_pow(int base, int pw)
{
	if (pw < 0)
		return (0);
	if (pw == 0)
		return (1);
	if (pw == 1)
		return (base);
	while (pw > 2)
	{
		base *= 10;
		pw--;
	}
	return (base);
}

static char	*min_int(void)
{
	char	*num;

	num = malloc (12);
	if (!num)
		return (NULL);
	num = ft_memcpy(num, "-2147483648\0", 12);
	return (num);
}

static size_t	check_sign(int *n, char *num)
{
	size_t	i;

	if (*n < 0)
	{
		*n = *n * -1;
		num[0] = '-';
		i = 1;
	}
	else
		i = 0;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	i;
	int		res;
	size_t	count;

	if (n == -2147483648)
		return (min_int());
	count = count_digits(n);
	num = malloc (count + 1);
	if (num == NULL)
		return (NULL);
	i = check_sign(&n, num);
	while (i < count - 1)
	{
		res = n / ft_pow(10, count - i);
		n -= res * ft_pow(10, count - i);
		num[i] = res + 48;
		i++;
	}
	num[i] = n + 48;
	num[count] = 0;
	return (num);
}
