/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:07:01 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 16:19:00 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			ptr = (char *)&big[i];
			while (little[j] && i + j < len)
			{
				if (little[j] != big[i + j])
					break ;
				j++;
			}
			if (little[j] == '\0')
				return (ptr);
		}
		i++;
	}
	return (NULL);
}
