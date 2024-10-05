/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:04:31 by marvin            #+#    #+#             */
/*   Updated: 2024/10/05 12:26:39 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, char *src, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && i < (n - 1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}