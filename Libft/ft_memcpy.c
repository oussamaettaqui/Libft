/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:17:29 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/18 12:15:12 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*c_src;
	unsigned char		*c_dst;

	c_src = (const unsigned char *)src;
	c_dst = (unsigned char *)dst;
	i = 0;
	if (!c_dst && !c_src)
		return (NULL);
	if (c_dst == c_src)
		return (dst);
	while (i < n)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}
