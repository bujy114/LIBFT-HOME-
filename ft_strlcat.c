/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 10:03:12 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 18:31:08 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t snum;
	size_t	f;
	size_t	dnum;
	size_t	total;

	snum = 0;
	f = ft_strlen(src);
	dnum = ft_strlen(dst);
	total = dnum + f;
	if (dnum >= size)
		return (size + f);
	while (snum < f && (dnum + 1) < size)
	{
		dst[dnum] = src[snum];
		snum++;
		dnum++;
	}
	dst[dnum] = '\0';
	return (total);
}
