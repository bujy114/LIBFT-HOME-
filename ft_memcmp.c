/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:53:26 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/14 12:34:27 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				count;

	a = s1;
	b = s2;
	count = 0;
	while (count < n)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
		count++;
	}
	return (0);
}
