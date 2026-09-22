/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:43:52 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/21 17:17:14 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	num;
	t_list			*ptr;

	if (lst == NULL)
		return (0);
	ptr = lst;
	num = 0;
	while (ptr -> next != NULL)
	{
		ptr = ptr -> next;
		num++;
	}
	num++;
	return (num);
}
