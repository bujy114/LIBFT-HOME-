/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:24:18 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/29 15:28:51 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	n = 0;
	while (n < len && s[n + start])
	{
		ptr[n] = s[n + start];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
