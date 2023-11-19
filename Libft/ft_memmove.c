/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:20:26 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/17 18:23:20 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*c_src;
	unsigned char		*c_dst;

	c_src = (const unsigned char *)src;
	c_dst = (unsigned char *)dst;
	i = 0;
	if (!c_src && !c_dst)
		return (NULL);
	if (c_src == c_dst)
		return ((void *)src);
	else if (c_dst > c_src)
	{
		while (len > i)
		{
			c_dst[len - 1] = c_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(c_dst, c_src, len);
	return (dst);
}
