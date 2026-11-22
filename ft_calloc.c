/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:04:51 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/18 10:04:52 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	else if (size == 0 || nmemb == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = 0;
		return ((void *)ptr);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
