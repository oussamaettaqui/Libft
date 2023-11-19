/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:31:35 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/17 19:01:10 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	size_t	i;

	if (dstsize == 0 && !dst)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	s = (char *)src;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	while (src[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
