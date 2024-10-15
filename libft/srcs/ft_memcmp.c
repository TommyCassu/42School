/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:45:14 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 02:06:50 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < (n - 1) && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
        i++;
    return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}