/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:25:46 by marvin            #+#    #+#             */
/*   Updated: 2024/10/04 23:25:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    k = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (dstsize <= i + j)
        return (i + j);
    while (src[k] != '\0' && i + k + 1 < dstsize)
    {
        dst[i + k] = src[k];
        k++;
    }
    dst[i + k] = '\0';
    return (i + j);
}