/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:06:42 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 16:17:43 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = 0;
	src_size = ft_strlen(src);
	while (dst_size < size && dest[dst_size])
		dst_size++;
	if (size <= dst_size)
		return (size + src_size);
	while (src[i] && dst_size + i < size - 1)
	{
		dest[dst_size + i] = src[i];
		i++;
	}
	dest[dst_size + i] = '\0';
	return (src_size + dst_size);
}
