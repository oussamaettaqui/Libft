/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:22:43 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/12 14:18:46 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	size_t	len;
	char	*c_s1;

	len = ft_strlen(s1);
	c_s1 = malloc(sizeof(char) * len + 1);
	if (!c_s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		c_s1[i] = s1[i];
		i++;
	}
	c_s1[i] = '\0';
	return (c_s1);
}
