/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:32:43 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/21 13:24:36 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*after;

	if (!*lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		after = ptr -> next;
		ft_lstdelone(ptr, del);
		ptr = after;
	}
	*lst = NULL;
}
