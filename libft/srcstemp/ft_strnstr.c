/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:37:22 by toto              #+#    #+#             */
/*   Updated: 2024/10/23 21:02:39 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t size;
    j = 0;
    i = 0;
    
    size = ft_strlen(little);
    printf("%ld", size);
    if (size == 0)
        return ((char*)big);
    
    while (i < len && big[i] != '\0')
    {
        if (little[j] == big[i])
            j++;
        if (size == j)
        {
            printf("%s",(char*)big + i );
            return ((char*)big);
        }
        big++;
        i++;
    }
    
    return (0);
}

int main()
{
    // Test 1: Recherche normale
    //check_result("Hello, World!", "World", 13, "World!");

    // Test 2: Sous-chaîne non trouvée
    //check_result("Hello, World!", "OpenAI", 13, NULL);

    // Test 3: Sous-chaîne vide
    //check_result("Hello, World!", "", 13, "Hello, World!");

    // Test 4: Longueur limitée
    //check_result("Hello, World!", "World", 8, NULL);

    // Test 5: Sous-chaîne au début
    ft_strnstr("Hello, World!", "Hello", 13);

    // Test 6: Sous-chaîne à la fin
    //check_result("Hello, World!", "ld!", 13, "ld!");

    // Test 7: Longueur exacte
    //check_result("Hello", "Hello", 5, "Hello");

    // Test 8: Longueur plus grande que nécessaire
    //check_result("Hello", "Hell", 10, "Hello");

    // Test 9: Chaîne principale plus courte que len
    //check_result("Hi", "Hi", 5, "Hi");

    // Test 10: Caractères répétés
    //check_result("aaaaab", "aaab", 6, "aaab");

    return 0;
}