/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:33:49 by tcassu            #+#    #+#             */
/*   Updated: 2024/11/05 12:15:54 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	**tmp;

	tmp = lst;
	if (!new)
		return (NULL);
	if (!lst)
	{
		lst = new;
		return ;
	}	
	new->next = tmp;
	*lst = new;
}
