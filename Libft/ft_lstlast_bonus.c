/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:48:19 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/12 14:09:42 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ls;

	if (lst == NULL)
		return (NULL);
	ls = lst;
	while (ls && ls->next != NULL)
	{
		ls = ls->next;
	}
	return (ls);
}
