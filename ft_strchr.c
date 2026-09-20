/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:49:38 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 12:25:49 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*n;

	n = s;
	while (1)
	{
		if (*n == c)
			return ((char *)n);
		if (*n == '\0')
			return (NULL);
		n++;
	}
}
