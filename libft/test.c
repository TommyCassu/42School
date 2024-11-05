/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:32:22 by tcassu            #+#    #+#             */
/*   Updated: 2024/11/05 13:34:05 by tcassu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libft.h"

#define OK "\033[0;32mOK\033[0m"
#define KO "\033[0;31mKO\033[0m"


void test_ft_isalpha()
{
    printf("ft_isdigit:\n");
    
	printf("  Test 1: %s\n", (ft_isalpha('z') == 1)? OK : KO);
	printf("  Test 2: %s\n", (ft_isalpha('a') == 1) ? OK : KO);
	printf("  Test 3: %s\n", (ft_isalpha('9') == 0) ? OK : KO);
	printf("  Test 4: %s\n", (ft_isalpha('A') == 1) ? OK : KO);
}

void test_ft_isdigit()
{
    printf("ft_isdigit:\n");
    
    printf("  Test 1: %s\n", (ft_isdigit('H') == 0)? OK : KO);
	printf("  Test 1: %s\n", (ft_isdigit(' ') == 0)? OK : KO);
	printf("  Test 2: %s\n", (ft_isdigit('0') == 1) ? OK : KO);
	printf("  Test 3: %s\n", (ft_isdigit('9') == 1) ? OK : KO);
	printf("  Test 4: %s\n", (ft_isdigit('!') == 0) ? OK : KO);
}

void test_ft_isalnum()
{
    printf("ft_isalnum:\n");
    
    printf("  Test 1: %s\n", (ft_isalnum('H') == 1)? OK : KO);
	printf("  Test 2: %s\n", (ft_isalnum('0') == 1) ? OK : KO);
	printf("  Test 3: %s\n", (ft_isalnum('9') == 1) ? OK : KO);
	printf("  Test 4: %s\n", (ft_isalnum(47) == 0) ? OK : KO);
}

void test_ft_isascii()
{
    printf("ft_isascii:\n");
    
    printf("  Test 1: %s\n", (ft_isascii('H') == 1)? OK : KO);
	printf("  Test 2: %s\n", (ft_isascii(128) == 0) ? OK : KO);
	printf("  Test 3: %s\n", (ft_isascii(56) == 1) ? OK : KO);
	printf("  Test 4: %s\n", (ft_isascii(0) == 1) ? OK : KO);
}

void test_ft_isprint()
{
    printf("ft_isprint:\n");
    
    printf("  Test 1: %s\n", (ft_isprint(31) == 0)? OK : KO);
	printf("  Test 2: %s\n", (ft_isprint(32) == 1) ? OK : KO);
	printf("  Test 3: %s\n", (ft_isprint(127) == 0) ? OK : KO);
	printf("  Test 4: %s\n", (ft_isprint(126) == 1) ? OK : KO);
}

int main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	//toto
}git remote -v
