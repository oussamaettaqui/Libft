/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:20:01 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/13 17:12:57 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && !(s[i] == c))
			i++;
	}
	return (count);
}

static char	*alloc_word(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	i = 0;
	while (s[i] && !(s[i] == c))
		i++;
	len = i;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_it(char **strings, int i)
{
	while (i > 0)
	{
		i--;
		free(strings[i]);
	}
	free(strings);
}

static int	help_split(char	**strings, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			strings[i] = alloc_word(&s[j], c);
			if (!(strings[i]))
			{
				free_it(strings, i);
				return (1);
			}
			i++;
		}
		while (s[j] && !(s[j] == c))
			j++;
	}
	strings[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	len_s;
	int		is_free;

	if (!s)
		return (NULL);
	len_s = count_strings(s, c);
	strings = malloc(sizeof(char *) * (len_s + 1));
	if (!strings)
		return (NULL);
	is_free = help_split(strings, s, c);
	if (is_free == 1)
		return (NULL);
	return (strings);
}
