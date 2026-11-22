/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:06:06 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/23 20:38:42 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d1;
	const unsigned char	*s2;

	i = 0;
	d1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (i < n)
	{
		d1[i] = s2[i];
		i++;
	}
	return (dest);
}
