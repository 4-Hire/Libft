/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:05:20 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 09:57:08 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	fill(char *str, int n, int size, int sign)
{
	str[size--] = '\0';
	while (n > 0)
	{
		str[size--] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		str[size] = '-';
}

static char	*sp_nums(int n)
{
	char	*number;

	if (n == 0)
	{
		number = malloc(2 * sizeof(char));
		if (!number)
			return (NULL);
		number[0] = '0';
		number[1] = '\0';
		return (number);
	}
	else
	{
		number = malloc(12 * sizeof(char));
		if (!number)
			return (NULL);
		number[0] = '-';
		number[1] = '2';
		fill(number, 147483648, 11, 1);
		return (number);
	}
}

char	*ft_itoa(int n)
{
	char	*number;

	int (size), (sign);
	size = 0;
	sign = 1;
	if (n == 0 || n == -2147483648)
	{
		number = sp_nums(n);
		return (number);
	}
	else if (n < 0)
	{
		n *= -1;
		sign = -1;
		size++;
	}
	size += num(n);
	number = malloc((size + 1) * sizeof(char));
	if (!number)
		return (NULL);
	fill(number, n, size, sign);
	return (number);
}
