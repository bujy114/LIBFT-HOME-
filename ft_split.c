/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:02:14 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/22 17:24:44 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char const *s, char c)
{
	char const	*ptr;
	size_t		num;
	size_t		i;

	i = 0;
	num = 0;
	ptr = s;
	if (ptr[0] !=c)
		num++;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c && ptr[i + 1] != c)
			num++;
		i++;
	}
	return (num);
}

static char	**maketheptr(char const *s, char c)
{

}
char **ft_split(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(words_count(s, c));
}
