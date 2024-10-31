/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:35:15 by toto              #+#    #+#             */
/*   Updated: 2024/10/30 21:42:17 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *memory;
    
    memory = (void *)malloc(sizeof(size_t) * size);
    if (!memory)
        return (NULL);
    ft_bzero(memory, size);
    return (memory);
}