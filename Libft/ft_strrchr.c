/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:56:08 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/18 11:23:59 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	end;

	end = ft_strlen(str);
	while (end >= 0 && str[end] != (char)c)
	{
		if (end > 0)
			end--;
		else
			break ;
	}
	if (str[end] == (char)c)
		return ((char *)&str[end]);
	return (NULL);
}
