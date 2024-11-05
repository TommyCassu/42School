/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:15:22 by tcassu            #+#    #+#             */
/*   Updated: 2024/11/05 11:33:14 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->context = content;
	list->next = NULL;
	return (list);
}
/*
void	afficherListe(t_list *liste){
	t_list *tmp = liste;
	while(tmp != NULL)
	{
		printf("%s\n ", (char *)tmp->context);
		tmp = tmp->next;
	}
}

int main(void)
{
	char	str[] = "toto";
	afficherListe(ft_lstnew(str));
}
*/