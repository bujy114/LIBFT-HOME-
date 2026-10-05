/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 09:08:24 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/29 14:49:37 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;

	if (size == 0)
		return (ft_strlen(src));
	n = 0;
	while (n < size - 1 && src[n])
	{
		if (src[n] == '\0')
			break ;
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (ft_strlen(src));
}
