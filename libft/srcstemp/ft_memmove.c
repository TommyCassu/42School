/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:51:52 by toto              #+#    #+#             */
/*   Updated: 2024/11/06 18:18:05 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	void			*context;
	struct s_list	*next;	
}					t_list;

void    ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;
	if ((size_t)dest < (size_t)src)
	{
		n = n - 1;
		while (n)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n--;
			
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
}


void print_array(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    char str2[] = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Test 1: Déplacement sans chevauchement\n");
    printf("Avant : ");
    print_array(str1, 26);
    ft_memmove(str1 + 3, str1, 5);
    printf("Après ft_memmove : ");
    print_array(str1, 26);
    memmove(str2 + 3, str2, 5);
    printf("Après memmove    : ");
    print_array(str2, 26);
    printf("Résultat : %s\n\n", (memcmp(str1, str2, 26) == 0) ? "OK" : "ERREUR");

    char str3[] = "abcdefghijklmnopqrstuvwxyz";
    char str4[] = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Test 2: Déplacement avec chevauchement (avant vers après)\n");
    printf("Avant : ");
    print_array(str3, 26);
    ft_memmove(str3 + 3, str3, 10);
    printf("Après ft_memmove : ");
    print_array(str3, 26);
    memmove(str4 + 3, str4, 10);
    printf("Après memmove    : ");
    print_array(str4, 26);
    printf("Résultat : %s\n\n", (memcmp(str3, str4, 26) == 0) ? "OK" : "ERREUR");

    char str5[] = "abcdefghijklmnopqrstuvwxyz";
    char str6[] = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Test 3: Déplacement avec chevauchement (après vers avant)\n");
    printf("Avant : ");
    print_array(str5, 26);
    ft_memmove(str5, str5 + 3, 10);
    printf("Après ft_memmove : ");
    print_array(str5, 26);
    memmove(str6, str6 + 3, 10);
    printf("Après memmove    : ");
    print_array(str6, 26);
    printf("Résultat : %s\n\n", (memcmp(str5, str6, 26) == 0) ? "OK" : "ERREUR");

    char str7[] = "abcdefghijklmnopqrstuvwxyz";
    
    printf("Test 4: Déplacement de zéro octet\n");
    printf("Avant : ");
    print_array(str7, 26);
    ft_memmove(str7 + 3, str7, 0);
    printf("Après ft_memmove : ");
    print_array(str7, 26);
    printf("Résultat : %s\n\n", (memcmp(str7, "abcdefghijklmnopqrstuvwxyz", 26) == 0) ? "OK" : "ERREUR");

    return 0;
}
