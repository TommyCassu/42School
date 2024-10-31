/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:31:55 by toto              #+#    #+#             */
/*   Updated: 2024/10/31 00:58:21 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char    *result;

    i = 0;
    if (!s)
        return (NULL);
    if ((ft_strlen(s) - start) < len)
        len = (ft_strlen(s) - start);
    if (!(result = (char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    while (i < len && s[start + i] != '\0')
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}