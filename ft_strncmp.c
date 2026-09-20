/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:25:55 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/14 09:48:00 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	n;

	n = 0;
	while (n < num)
	{
		if (s1[n] > s2[n])
			return (1);
		if (s2[n] > s1[n])
			return (-1);
		n++;
	}
	return (0);
}
