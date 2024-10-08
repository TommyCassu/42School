/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:53:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 00:53:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest && !src)
        return NULL;
    while (0 < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    ((char *)src)[i] = '\0';
}