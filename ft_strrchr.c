/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:07:04 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 16:10:09 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			l = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		l = (char *)s;
	return (l);
}
