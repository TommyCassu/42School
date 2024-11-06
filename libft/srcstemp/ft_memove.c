/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:51:52 by toto              #+#    #+#             */
/*   Updated: 2024/11/03 19:48:33 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void    ft_memmove(void *dest, const void *src, size_t n)
{
    char    *tempdest;
    char    *tempsrc;
    
    tempsrc = (char *)src;
    tempdest = (char *)dest;
    while (n >= 0)
    {
        tempdest[n] = tempsrc[n];
        n--;
    }
    printf("%s", tempdest); 
}
int main()
{
    char t[] = "toto";
    char g[] = "kiti";

    ft_memmove(t, g, 4);
}