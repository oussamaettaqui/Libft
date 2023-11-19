/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:25:46 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/12 14:17:40 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ls;

	if (!lst || !del)
		return ;
	ls = *lst;
	while (ls)
	{
		ls = ls->next;
		ft_lstdelone(*lst, del);
		*lst = ls;
	}
}
