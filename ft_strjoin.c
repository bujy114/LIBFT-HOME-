/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:17:30 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 16:19:05 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	n;
	char	*ptr;
	
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ptr = malloc(s1len + s2len + 1);
    if (ptr == NULL)
        return (NULL);
    n = 0;
    while (n < s1len)
    {
        ptr[n] = s1[n];
        n++;
    }
    while (n < s2len + s1len)
    {
        ptr[n] = s2[n - s1len];
        n++;
    }
    ptr[n] = '\0';
    return (ptr);
}
