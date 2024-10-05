/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:02:13 by toto              #+#    #+#             */
/*   Updated: 2024/10/05 12:25:44 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if (((unsigned char*)s)[i] == ((unsigned char)c))
            return ((void *)&((unsigned char *)s)[i]);
        i++;
    }
    return (NULL);
}