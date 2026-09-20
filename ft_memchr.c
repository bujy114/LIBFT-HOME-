/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:57:05 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/14 10:39:49 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			count;

	ptr = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		count++;
	}
	return (NULL);
}
