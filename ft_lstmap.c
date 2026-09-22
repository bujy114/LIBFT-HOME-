/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:52:11 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/21 17:15:22 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	t_list	*ptr;
	void	*curr;

	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	ptr = lst;
	while (ptr)
	{
		curr = f(ptr -> content);
		newnode = ft_lstnew(curr);
		if (newnode == NULL)
		{
			del(curr);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		ptr = ptr -> next;
	}
	return (newlst);
}
