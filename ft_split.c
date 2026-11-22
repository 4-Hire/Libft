/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarimi <akarimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:06:25 by akarimi           #+#    #+#             */
/*   Updated: 2026/10/24 15:31:32 by akarimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char s)
{
	return (c == s);
}

static int	count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if ((is_set(*(s + 1), c) && !is_set(*s, c)) || (*(s + 1) == '\0'
				&& !is_set(*s, c)))
			count++;
		s++;
	}
	return (count);
}

static char	**empty_s(void)
{
	char	**str;

	str = malloc(sizeof(char *));
	if (!str)
		return (NULL);
	str[0] = 0;
	return (str);
}

static int	sp(char *s, char c, char **split, char *start)
{
	int (j), (in), (i);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && is_set(s[i], c))
			i++;
		if (s[i] && !is_set(s[i], c))
		{
			start = (char *)&s[i];
			while (s[i] && !is_set(s[i], c))
				i++;
			split[j] = malloc((&s[i] - start + 1) * sizeof(char));
			if (!split[j])
				return (j);
			in = 0;
			while (start != &s[i])
				split[j][in++] = *start++;
			split[j++][in] = '\0';
		}
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*start;

	int (check), (words);
	if (!s || !*s)
	{
		if (!s)
			return (NULL);
		return (empty_s());
	}
	words = count_words((char *)s, c);
	start = NULL;
	split = ft_calloc((words + 1), sizeof(char *));
	if (!split)
		return (NULL);
	check = sp((char *)s, c, split, start);
	if (check < words)
	{
		while (check > 0)
			free(split[--check]);
		free(split);
		return (NULL);
	}
	split[words] = NULL;
	return (split);
}
