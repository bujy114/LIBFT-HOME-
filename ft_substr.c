/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:24:18 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 16:24:45 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
                size_t len)
{
    size_t n;
    char *ptr;
    char *src;

    if (start >= ft_strlen(s))
    {
        ptr = malloc(1);
        if (ptr == NULL)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
    ptr = malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    n = 0;
    src = s + start;
    while (n < len)
    {
        if (*src == '\0')
            break;
        ptr[n] = *src;
        src++;
        n++;
    }
    ptr[n] = '\0';
    return (ptr);
}
