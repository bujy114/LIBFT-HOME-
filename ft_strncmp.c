/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:25:55 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/27 13:08:15 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	n;

	n = 0;
	while (n < num && s1[n] != '\0' && s2[n] != '\0')
	{
		if ((unsigned char)s1[n] != (unsigned char)s2[n])
			return ((unsigned char)s1[n] - (unsigned char)s2[n]);
		n++;
	}
	if (n < num)
		return ((unsigned char)s1[n] - (unsigned char)s2[n]);
	return (0);
}
