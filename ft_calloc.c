/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:02:21 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/29 15:10:35 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;

	if (size != 0 && num > ((size_t)-1) / size)
		return (NULL);
	ptr = malloc(size * num);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return ((void *)ptr);
}
