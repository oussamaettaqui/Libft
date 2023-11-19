/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oettaqui <oettaqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:53:45 by oettaqui          #+#    #+#             */
/*   Updated: 2023/11/18 11:59:53 by oettaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_elem;
	void	*p;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		p = f(lst->content);
		new_elem = ft_lstnew(p);
		if (!new_elem)
		{
			free(p);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new_elem);
		lst = lst->next;
	}
	return (newlst);
}
