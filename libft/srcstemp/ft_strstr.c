/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:58:50 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 18:32:50 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	char	*temp;

	j = 0;
	temp = str;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	else if (ft_strlen(to_find) == 0)
		return (str);
	while (temp[0] != '\0')
	{
		if (to_find[j] == 0)
			return (temp - j);
		else if (temp[0] == to_find[j])
			j++;
		else
			j = 0;
		temp++;
	}
	if (to_find[j] == 0)
		return (temp - j);
	return (0);
}