/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:03:00 by toto              #+#    #+#             */
/*   Updated: 2024/10/31 19:09:58 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = n;
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    if (nbr > 9)
    {
        ft_putnbr_fd((nbr / 10), fd);
        ft_putchar_fd((nbr % 10 + '0'), fd);
    }
    else
        ft_putchar_fd(nbr + '0', fd);
}