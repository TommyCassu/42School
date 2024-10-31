/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:19:30 by toto              #+#    #+#             */
/*   Updated: 2024/10/31 00:47:21 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int size;
    char    *result;

    i = 0;
    j = 0;
    size = ft_strlen(s1) + ft_strlen(s2);
    if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
