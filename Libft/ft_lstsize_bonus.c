/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:57:46 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/17 20:03:50 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ls;

	i = 0;
	ls = lst;
	while (ls)
	{
		i++;
		ls = ls->next;
	}
	return (i);
}
