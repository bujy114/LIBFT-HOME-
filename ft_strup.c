/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:10:45 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 16:11:37 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    size_t	n;
    char	*ptr;

    n = ft_strlen(s);
    ptr = malloc(n + 1);
    if (ptr == NULL)
        return (NULL);
    ft_strcpy(ptr, s);
    ptr[n] = '\0';
    return (ptr);
}
