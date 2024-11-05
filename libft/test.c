/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcassu <tcassu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:32:22 by tcassu            #+#    #+#             */
/*   Updated: 2024/11/05 14:27:09 by tcassu           ###   ########.fr       */
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

void test_ft_strlen()
{
    printf("ft_strlen:\n");
    char	s1[] = "Toto";
	char	s2[] = "toto va a la plage";
	char	s3[] = "\n";
	char	s4[] = "";
	
    printf("  Test 1: %s\n", (ft_strlen(s1) == strlen(s1))? OK : KO);
	printf("  Test 2: %s\n", (ft_strlen(s2) == strlen(s2)) ? OK : KO);
	printf("  Test 3: %s\n", (ft_strlen(s3) == strlen(s3)) ? OK : KO);
	printf("  Test 4: %s\n", (ft_strlen(s4) == strlen(s4)) ? OK : KO);
}

void test_ft_memset()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    char empty1[1] = "";
    char empty2[1] = "";
	
	printf("ft_memset:\n");
	
    printf("  Test 1: %s\n", (memcmp(ft_memset(str1, '*', 5), memset(str2, '*', 5), sizeof(str1)) == 0) ? OK : KO);
	printf("  Test 2: %s\n", (memcmp(ft_memset(str1, 'A', sizeof(str1)), memset(str2, 'A', sizeof(str2)), sizeof(str1)) == 0) ? OK : KO);
    printf("  Test 3: %s\n", (memcmp(ft_memset(str1, '\0', sizeof(str1)), memset(str2, '\0', sizeof(str2)), sizeof(str1)) == 0) ? OK : KO);
    printf("  Test 4: %s\n", (memcmp(ft_memset(empty1, 'A', sizeof("")) , memset(empty2, 'A', sizeof("")) , sizeof("")) ==0 )? OK : KO);
}

void test_ft_bzero()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
	char empty1[20] = "";
    char empty2[20] = "";
    printf("ft_bzero:\n");
    
    ft_bzero(str1, 5);
    bzero(str2, 5);
    printf("  Test 1: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1 + 7, 3);
    bzero(str2 + 7, 3);
    printf("  Test 2: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, (0));
    bzero(str2, (0));
    printf("  Test 3: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, 20);
    bzero(str2, 20);
    printf("  Test 4: %s\n", (memcmp(empty1, empty2, 20) == 0) ? OK : KO);
}

void test_ft_toupper()
{
    printf("ft_toupper:\n");
	
    printf("  Test 1: %s\n", (ft_toupper('c') == 'C')? OK : KO);
	printf("  Test 2: %s\n", (ft_toupper('E') == 'E') ? OK : KO);
	printf("  Test 3: %s\n", (ft_toupper('!') == '!') ? OK : KO);
	printf("  Test 4: %s\n", (ft_toupper('1') == '1') ? OK : KO);
	printf("  Test 4: %s\n", (ft_toupper('\n') == '\n') ? OK : KO);
}

void test_ft_tolower()
{
    printf("ft_tolower:\n");
	
    printf("  Test 1: %s\n", (ft_tolower('z') == 'z')? OK : KO);
	printf("  Test 2: %s\n", (ft_tolower('A') == 'a') ? OK : KO);
	printf("  Test 3: %s\n", (ft_tolower('!') == '!') ? OK : KO);
	printf("  Test 4: %s\n", (ft_tolower('1') == '1') ? OK : KO);
	printf("  Test 4: %s\n", (ft_tolower('\n') == '\n') ? OK : KO);
}

void test_ft_strchr()
{
    const char str1[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("ft_strchr:\n");
	
    printf("  Test 1: %s\n", (ft_strchr(str1, 'W') == strchr(str1, 'W'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strchr(str1, 'H') == strchr(str1, 'H'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strchr(str1, 'd') == strchr(str1, 'd'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strchr(str1, '!') == strchr(str1, '!'))? OK : KO);
}

void test_ft_strrchr()
{
    const char str1[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("ft_strrchr:\n");
	
    printf("  Test 1: %s\n", (ft_strrchr(str1, 'o') == strrchr(str1, 'o'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strrchr(str1, 'H') == strrchr(str1, 'H'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strrchr(str1, 'd') == strrchr(str1, 'd'))? OK : KO);
	printf("  Test 1: %s\n", (ft_strrchr(str1, '!') == strrchr(str1, '!'))? OK : KO);
}

void test_ft_strncmp()
{
    printf("ft_strncmp:\n");
    printf("  Test 1: %s\n", (ft_strncmp("Hello", "Hello", 4) == strncmp("Hello", "Hello", 4)) ? OK : KO);
    printf("  Test 2: %s\n", (ft_strncmp("Hello", "Hellx", 5) < 0 && strncmp("Hello", "Hellx", 5) < 0) ? OK : KO);
    printf("  Test 3: %s\n", (ft_strncmp("Hellx", "Hello", 5) > 0 && strncmp("Hellx", "Hello", 5) > 0) ? OK : KO);
    printf("  Test 4: %s\n", (ft_strncmp("", "", 0) == strncmp("", "", 0)) ? OK : KO);
}

void test_ft_memchr()
{
    const char str[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("ft_memchr:\n");
	
    printf("  Test 1: %s\n", (ft_memchr(str, 'o', strlen(str)) == memchr(str, 'o', strlen(str))) ? OK : KO);
    printf("  Test 2: %s\n", (ft_memchr(str, 'z', strlen(str)) == memchr(str, 'z', strlen(str))) ? OK : KO);
    printf("  Test 3: %s\n", (ft_memchr(str, 'H', strlen(str)) == memchr(str, 'H', strlen(str))) ? OK : KO);
    printf("  Test 4: %s\n", (ft_memchr(str, '\0', strlen(str)) == memchr(str, '\0', strlen(str))) ? OK : KO);
}

void test_ft_memcmp()
{
    printf("ft_memcmp:\n");
    
    printf("  Test 1: %s\n", (ft_memcmp("Hello", "Hello", 5) == memcmp("Hello", "Hello", 5)) ? OK : KO);
    printf("  Test 2: %s\n", (ft_memcmp("Hello", "Hellx", 5) < 0 && memcmp("Hello", "Hellx", 5) < 0) ? OK : KO);
    printf("  Test 3: %s\n", (ft_memcmp("Hello", "Hel", 4) > 0 && memcmp("Hello", "Hel", 4) > 0) ? OK : KO);
    printf("  Test 4: %s\n", (ft_memcmp("", "", 0) == memcmp("", "", 0)) ? OK : KO);
}

void test_ft_atoi()
{
	char	test1[] = " -123abc";
	char	test2[] = "2147483647";
	char	test3[] = "-2147483648";
	char	test4[] = "   +42";
    printf("ft_atoi:\n");
    
	printf("  Test 1 %s\n", (ft_atoi(test1) == atoi(test1)) ? OK : KO);
	printf("  Test 2 %s\n", (ft_atoi(test2) == atoi(test2)) ? OK : KO);
	printf("  Test 3 %s\n", (ft_atoi(test3) == atoi(test3)) ? OK : KO);
	printf("  Test 4 %s\n", (ft_atoi(test4) == atoi(test4)) ? OK : KO);
}
int main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	//test_ft_memcpy();
	//test_ft_memmove();
	//test_ft_strlcpy();
	//test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	//test_ft_strnstr();
	test_ft_atoi();
	
	//test_ft_calloc();
	//test_ft_strdup();
	
}