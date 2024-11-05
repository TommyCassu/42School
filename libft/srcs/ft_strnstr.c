/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:37:22 by toto              #+#    #+#             */
/*   Updated: 2024/11/04 21:49:26 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	i = 0;
	size = ft_strlen(little);
	if (size == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (little[j] == big[i])
			j++;
		if (size == j)
		{
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (0);
}
