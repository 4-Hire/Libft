/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:07:14 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 09:53:22 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findch(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	while (s1[start] && !findch(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && !findch(s1[end - 1], (char *)set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
