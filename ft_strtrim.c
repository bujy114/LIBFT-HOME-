/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:05:45 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/16 14:04:25 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	if(!s1 || !set)
		return (NULL);
	while(s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while(end > start && ft_strchr(set, s1[end - 1]))
	end--;
	result = malloc(end - start + 1);
	if (!result)
		return(NULL);
	while(i < end - start)
	{
	result[i] = s1[i + start];
	i++;
	}
	result[i] = '\0';
	return (result);

}
