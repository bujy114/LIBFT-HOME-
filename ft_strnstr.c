/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 11:12:50 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/14 12:40:15 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	countb;
	size_t	counts;

	countb = 0;
	counts = 0;
	if (*small == '\0')
		return ((char *) big);
	while (countb < len)
	{
		if (big[countb] == small[0])
		{
			while (counts < ft_strlen(small) && counts + countb < len)
			{
				if (big[countb + counts] != small[counts])
					break ;
				counts++;
			}
			if (counts == ft_strlen(small))
				return ((char *)big + countb);
		}
		counts = 0;
		countb++;
	}
	return (NULL);
}
