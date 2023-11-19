/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:43:53 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/17 18:59:38 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	j = 0;
	ft_strlcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (ptr);
}
