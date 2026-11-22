/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:06:09 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 15:48:55 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d1;
	const unsigned char	*s2;

	if (n == 0)
		return (dest);
	i = n;
	d1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (d1 < s2)
		ft_memcpy(dest, src, n);
	else
	{
		while (i)
		{
			d1[i - 1] = s2[i - 1];
			i--;
		}
	}
	return (dest);
}
