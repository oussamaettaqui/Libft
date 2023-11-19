/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:16:21 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/12 14:17:28 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	i = 0;
	last = ft_lstlast(*lst);
	if (last->next == NULL)
	{
		last->next = new;
	}
}
