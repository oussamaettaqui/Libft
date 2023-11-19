/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:54:43 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/15 13:54:56 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

static size_t	incrementing(char const *s, size_t start, char const *set)
{
	while (s[start] && get_len(s[start], set) == 1)
		start++;
	return (start);
}

static size_t	decrementing(char const *s, size_t end,
		char const *set, size_t start)
{
	while (end > start && get_len(s[end], set) == 1)
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*ptr;
	size_t	i;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = incrementing(s1, start, set);
	end = decrementing(s1, (ft_strlen(s1) - 1), set, start);
	end++;
	len = end - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (end > start)
		ptr[i++] = (char )s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
