/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:59:10 by toto              #+#    #+#             */
/*   Updated: 2024/11/04 21:47:35 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = (void *)malloc(sizeof(size) * nmemb);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
