/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:37:22 by toto              #+#    #+#             */
/*   Updated: 2024/11/05 15:27:45 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	i = 0;
	size = ft_strlen(little);
	if (size == 0 || len == 0)
		return ((char *)big);
	while (i < len && big[0] != '\0')
	{
		if (little[j] == big[0])
			j++;
		if (size == j)
		{
			return ((char *)big - j + 1);
		}
		big++;
		i++;
	}
	return (0);
}
/*
int main()
{
	const char	s1[] = "Hello, World!";
	const char	s2[] = "!";

	printf("%s", ft_strnstr(s1, s2, 20));
}*/
