/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:59:05 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/21 17:17:50 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list		*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr -> next != NULL)
	{
		ptr = ptr -> next;
	}
	return (ptr);
}
