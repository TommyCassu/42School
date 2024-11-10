/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:24:38 by toto              #+#    #+#             */
/*   Updated: 2024/11/06 15:32:28 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

int	ft_countdigit(int nb)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
	}
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i + sign);
}

char	*ft_itoa(int nb)
{
	int		nbdigit;
	char	*result;
	int		sign;
	long	nbr;

	sign = 0;
	nbr = nb;
	nbdigit = ft_countdigit(nbr);
	result = (char *)malloc(sizeof(char) * (nbdigit + 1));
	if (!result)
		return (0);
	if (nbr < 0)
	{
		result[0] = '-';
		sign = 1;
		nbr *= -1;
	}
	result[nbdigit] = '\0';
	nbdigit--;
	while (nbdigit >= sign)
	{
		result[nbdigit] = (nbr % 10) + '0';
		nbr /= 10;
		nbdigit--;
	}
	return (result);
}

/*
include <stdio.h>
#include <string.h>
#include <limits.h>
void check_itoa(int n, const char *expected)
{
	printf("Test ft_itoa(%d):\n", n);
	printf("Résultat attendu : %s\n", expected);
	
	char *result = ft_itoa(n);
	if (result == NULL)
	{
		printf("ERREUR : ft_itoa a retourné NULL\n\n");
		return;
	}
	
	printf("Résultat obtenu  : %s\n", result);
	
	if (strcmp(result, expected) == 0)
	{
		printf("Test RÉUSSI\n\n");
	}
	else
	{
		printf("Test ÉCHOUÉ\n\n");
	}
	
	free(result);
}

int main()
{
	int tests[] = {0, 1, 42, 1234, -1, -42, -1234, INT_MAX, INT_MIN, 5, -5, 100, -100};
	const char *expected[] = {"0", "1", "42", "1234", "-1", "-42", "-1234", "2147483647", "-2147483648", "5", "-5", "100", "-100"};
	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++)
	{
		printf("Exécution du test %d sur %d\n", i + 1, num_tests);
		check_itoa(tests[i], expected[i]);
		
		// Pause après chaque test pour vérifier la sortie
		printf("Appuyez sur Entrée pour continuer...\n");
		getchar();
	}

	return 0;
}*/