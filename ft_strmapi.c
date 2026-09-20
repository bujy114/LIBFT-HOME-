/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsallam <lsallam@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:22:44 by lsallam           #+#    #+#             */
/*   Updated: 2026/09/20 16:22:57 by lsallam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t num;
    char *ptr;

    if (!s || !f)
        return (NULL);
    i = 0;
    num = ft_strlen(s);
    ptr = malloc(num + 1);
    if (ptr == NULL)
        return (NULL);
    while (i < num)
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
