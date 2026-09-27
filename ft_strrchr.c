/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:02:35 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/27 12:41:37 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	char		*theone;

	theone = NULL;
	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			theone = (char *)ptr;
		ptr++;
	}
	if (c == '\0')
		return ((char *)ptr);
	return (theone);
}
