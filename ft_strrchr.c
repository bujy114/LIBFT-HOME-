/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:02:35 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/14 10:42:49 by lsallam          ###   ########.fr       */
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
			theone =(char *)ptr;
		ptr++;
	}
	if (c == '\0')
		return ((char *)ptr);
	if (theone == NULL)
		return (NULL);
	return (theone);
}
