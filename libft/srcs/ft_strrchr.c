/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:43:51 by toto              #+#    #+#             */
/*   Updated: 2024/10/31 02:02:59 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    if ((char)c == '\0')
        return ((char *)s + i);
    while (s[i] != c)
    {
        if (i == 0)
            return (NULL);
        i--;
    }
    return ((char *)s + i);  
}
