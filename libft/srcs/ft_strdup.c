/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:48:04 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 17:59:18 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *result;
    int i;
    int size;

    i = 0;
    size = ft_strlen(str);
    result = (char *)malloc(sizeof(char) * size + 1);
    if  (result == NULL)
        return (0);
    while (str[i] != '\0')
    {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}