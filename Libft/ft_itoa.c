/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:56:39 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/15 13:51:18 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	len_n(long n)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_itoa_2(char *res, long nb, long len)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		res[i++] = '-';
	}
	if (nb == 0)
		res[i++] = '0';
	while (nb > 0)
	{
		res[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	long	len;
	long	nb;

	nb = n;
	len = len_n(nb);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	ft_itoa_2(res, nb, len);
	return (res);
}
