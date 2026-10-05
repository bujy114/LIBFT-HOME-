/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:49:38 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/29 14:39:09 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*n;

	n = (unsigned char *) s;
	while (1)
	{
		if (*n == (unsigned char)c)
			return ((char *)n);
		if (*n == '\0')
			return (NULL);
		n++;
	}
}
