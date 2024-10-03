/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:51:09 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 20:51:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char *s1, char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
        i++;
    return (s1 - s2);
}