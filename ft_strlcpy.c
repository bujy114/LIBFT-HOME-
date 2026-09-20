/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 09:08:24 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 15:54:09 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	while (n <= size - 2)
	{
		if (src[n] == '\0')
			break ;
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (ft_strlen(src));
}
