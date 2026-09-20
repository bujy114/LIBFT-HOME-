/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 10:36:21 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/10 11:32:46 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t s)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	while (s != 0)
	{
		*ptr = c;
		ptr++;
		s--;
	}
	return (p);
}
