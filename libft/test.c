/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:32:22 by tcassu            #+#    #+#             */
/*   Updated: 2024/11/07 01:20:21 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "includes/libft.h"

#define OK "\033[0;32mOK\033[0m"
#define KO "\033[0;31mKO\033[0m"


void test_ft_isalpha()
{
    printf("\nft_isdigit:");
    
	printf(" [%s]", (ft_isalpha('z') == 1)? OK : KO);
	printf(" [%s]", (ft_isalpha('a') == 1) ? OK : KO);
	printf(" [%s]", (ft_isalpha('9') == 0) ? OK : KO);
	printf(" [%s]", (ft_isalpha('A') == 1) ? OK : KO);
}

void test_ft_isdigit()
{
    printf("\nft_isdigit:");
    
    printf(" [%s]", (ft_isdigit('H') == 0)? OK : KO);
	printf(" [%s]", (ft_isdigit(' ') == 0)? OK : KO);
	printf(" [%s]", (ft_isdigit('0') == 1) ? OK : KO);
	printf(" [%s]", (ft_isdigit('9') == 1) ? OK : KO);
	printf(" [%s]", (ft_isdigit('!') == 0) ? OK : KO);
}

void test_ft_isalnum()
{
    printf("\nft_isalnum:");
    
    printf(" [%s]", (ft_isalnum('H') == 1)? OK : KO);
	printf(" [%s]", (ft_isalnum('0') == 1) ? OK : KO);
	printf(" [%s]", (ft_isalnum('9') == 1) ? OK : KO);
	printf(" [%s]", (ft_isalnum(47) == 0) ? OK : KO);
}

void test_ft_isascii()
{
    printf("\nft_isascii:");
    
    printf(" [%s]", (ft_isascii('H') == 1)? OK : KO);
	printf(" [%s]", (ft_isascii(128) == 0) ? OK : KO);
	printf(" [%s]", (ft_isascii(56) == 1) ? OK : KO);
	printf(" [%s]", (ft_isascii(0) == 1) ? OK : KO);
}

void test_ft_isprint()
{
    printf("\nft_isprint:");
    
    printf(" [%s]", (ft_isprint(31) == 0)? OK : KO);
	printf(" [%s]", (ft_isprint(32) == 1) ? OK : KO);
	printf(" [%s]", (ft_isprint(127) == 0) ? OK : KO);
	printf(" [%s]", (ft_isprint(126) == 1) ? OK : KO);
}

void test_ft_strlen()
{
    printf("\nft_strlen: ");
    char	s1[] = "Toto";
	char	s2[] = "toto va a la plage";
	char	s3[] = "\n";
	char	s4[] = "";
	
    printf(" [%s]", (ft_strlen(s1) == strlen(s1))? OK : KO);
	printf(" [%s]", (ft_strlen(s2) == strlen(s2)) ? OK : KO);
	printf(" [%s]", (ft_strlen(s3) == strlen(s3)) ? OK : KO);
	printf(" [%s]", (ft_strlen(s4) == strlen(s4)) ? OK : KO);
}

void test_ft_memset()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    char empty1[1] = "";
    char empty2[1] = "";
	
	printf("\nft_memset: ");
	
    printf(" [%s]", (memcmp(ft_memset(str1, '*', 5), memset(str2, '*', 5), sizeof(str1)) == 0) ? OK : KO);
	printf(" [%s]", (memcmp(ft_memset(str1, 'A', sizeof(str1)), memset(str2, 'A', sizeof(str2)), sizeof(str1)) == 0) ? OK : KO);
    printf(" [%s]", (memcmp(ft_memset(str1, '\0', sizeof(str1)), memset(str2, '\0', sizeof(str2)), sizeof(str1)) == 0) ? OK : KO);
    printf(" [%s]", (memcmp(ft_memset(empty1, 'A', sizeof("")) , memset(empty2, 'A', sizeof("")) , sizeof("")) ==0 )? OK : KO);
}

void test_ft_bzero()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
	char empty1[20] = "";
    char empty2[20] = "";
    printf("\nft_bzero:  ");
    
    ft_bzero(str1, 5);
    bzero(str2, 5);
    printf(" [%s]", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1 + 7, 3);
    bzero(str2 + 7, 3);
    printf(" [%s]", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, (0));
    bzero(str2, (0));
    printf(" [%s]", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, 20);
    bzero(str2, 20);
    printf(" [%s]", (memcmp(empty1, empty2, 20) == 0) ? OK : KO);
}

void test_ft_toupper()
{
    printf("\nft_toupper:");
	
    printf(" [%s]", (ft_toupper('c') == 'C')? OK : KO);
	printf(" [%s]", (ft_toupper('E') == 'E') ? OK : KO);
	printf(" [%s]", (ft_toupper('!') == '!') ? OK : KO);
	printf(" [%s]", (ft_toupper('1') == '1') ? OK : KO);
	printf(" [%s]", (ft_toupper('\n') == '\n') ? OK : KO);
}

void test_ft_tolower()
{
    printf("\nft_tolower:");
	
    printf(" [%s]", (ft_tolower('z') == 'z')? OK : KO);
	printf(" [%s]", (ft_tolower('A') == 'a') ? OK : KO);
	printf(" [%s]", (ft_tolower('!') == '!') ? OK : KO);
	printf(" [%s]", (ft_tolower('1') == '1') ? OK : KO);
	printf(" [%s]", (ft_tolower('\n') == '\n') ? OK : KO);
}

void test_ft_strchr()
{
    const char str1[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("\nft_strchr: ");
	
    printf(" [%s]", (ft_strchr(str1, 'W') == strchr(str1, 'W'))? OK : KO);
	printf(" [%s]", (ft_strchr(str1, 'H') == strchr(str1, 'H'))? OK : KO);
	printf(" [%s]", (ft_strchr(str1, 'd') == strchr(str1, 'd'))? OK : KO);
	printf(" [%s]", (ft_strchr(str1, '!') == strchr(str1, '!'))? OK : KO);
}

void test_ft_strrchr()
{
    const char str1[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("\nft_strrchr:");
	
    printf(" [%s]", (ft_strrchr(str1, 'o') == strrchr(str1, 'o'))? OK : KO);
	printf(" [%s]", (ft_strrchr(str1, 'H') == strrchr(str1, 'H'))? OK : KO);
	printf(" [%s]", (ft_strrchr(str1, 'd') == strrchr(str1, 'd'))? OK : KO);
	printf(" [%s]", (ft_strrchr(str1, '!') == strrchr(str1, '!'))? OK : KO);
}

void test_ft_strncmp()
{
    printf("\nft_strncmp:");
    printf(" [%s]", (ft_strncmp("Hello", "Hello", 4) == strncmp("Hello", "Hello", 4)) ? OK : KO);
    printf(" [%s]", (ft_strncmp("Hello", "Hellx", 5) < 0 && strncmp("Hello", "Hellx", 5) < 0) ? OK : KO);
    printf(" [%s]", (ft_strncmp("Hellx", "Hello", 5) > 0 && strncmp("Hellx", "Hello", 5) > 0) ? OK : KO);
    printf(" [%s]", (ft_strncmp("", "", 0) == strncmp("", "", 0)) ? OK : KO);
}

void test_ft_memchr()
{
    const char str[20] = "Hello, World!";
    //const char str2[20] = "Hello, World!";
	printf("\nft_memchr: ");
	
    printf(" [%s]", (ft_memchr(str, 'o', strlen(str)) == memchr(str, 'o', strlen(str))) ? OK : KO);
    printf(" [%s]", (ft_memchr(str, 'z', strlen(str)) == memchr(str, 'z', strlen(str))) ? OK : KO);
    printf(" [%s]", (ft_memchr(str, 'H', strlen(str)) == memchr(str, 'H', strlen(str))) ? OK : KO);
    printf(" [%s]", (ft_memchr(str, '\0', strlen(str)) == memchr(str, '\0', strlen(str))) ? OK : KO);
}

void test_ft_memcmp()
{
    printf("\nft_memcmp: ");
    
    printf(" [%s]", (ft_memcmp("Hello", "Hello", 5) == memcmp("Hello", "Hello", 5)) ? OK : KO);
    printf(" [%s]", (ft_memcmp("Hello", "Hellx", 5) < 0 && memcmp("Hello", "Hellx", 5) < 0) ? OK : KO);
    printf(" [%s]", (ft_memcmp("Hello", "Hel", 4) > 0 && memcmp("Hello", "Hel", 4) > 0) ? OK : KO);
    printf(" [%s]", (ft_memcmp("", "", 0) == memcmp("", "", 0)) ? OK : KO);
}

void test_ft_strnstr()
{
    const char r1[20] = "Hello, World!";
	const char r2[20] = "o";
	const char r3[20] = "ell";
	const char r4[20] = "d!";
	const char r5[20] = "";

	printf("\nft_strnstr:");
    printf(" [%s]", (ft_memcmp(ft_strnstr(r1, r2, ft_strlen(r1)), "o, World!", 10) == 0 )? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strnstr(r1, r3, ft_strlen(r1)), "ello, World!", 13) == 0 )? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strnstr(r1, r4, ft_strlen(r1)), "d!", 3) == 0 )? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strnstr(r1, r5, ft_strlen(r1)), "Hello, World!", 14) == 0 )? OK : KO);
}

void test_ft_atoi()
{
	char	test1[] = " -123abc";
	char	test2[] = "2147483647";
	char	test3[] = "-2147483648";
	char	test4[] = "   +42";
    printf("\nft_atoi:   ");
    
	printf(" [%s]", (ft_atoi(test1) == atoi(test1)) ? OK : KO);
	printf(" [%s]", (ft_atoi(test2) == atoi(test2)) ? OK : KO);
	printf(" [%s]", (ft_atoi(test3) == atoi(test3)) ? OK : KO);
	printf(" [%s]", (ft_atoi(test4) == atoi(test4)) ? OK : KO);
}

void test_ft_strdup()
{
	char	test1[] = "to";
	char	test2[] = "1231!@#4932 324wrswer";
	char	test3[] = "'[];{}]][123waqwe]]'";
	char	test4[] = "";
	
    printf("\nft_strdup: ");
    
	printf(" [%s]", (ft_memcmp(ft_strdup(test1), strdup(test1), 3) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strdup(test2), strdup(test2), 23) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strdup(test3), strdup(test3), 22) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strdup(test4), strdup(test4), 2) == 0) ? OK : KO);
}

void test_ft_itoa()
{
	int	str = -2147483648;
	int	str1 = 2147483647;
	int	str2 = 0;
	int	str3 = 42;
	
    printf("\nft_itoa:   ");
    
	printf(" [%s]", (ft_memcmp(ft_itoa(str), "-2147483648", 11) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_itoa(str1), "2147483647", 10) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_itoa(str2), "0", 1) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_itoa(str3), "42", 2) == 0) ? OK : KO);
}

void test_ft_strtrim()
{
	char	test1[] = "abcdefghij";
	char	test2[] = "    abcde     ";
	char	test3[] = "               ";
	char	test4[] = "";
	
    printf("\nft_strtrim:");
    
	printf(" [%s]", (ft_memcmp(ft_strtrim(test1, "aj"), "bcdefghi", 9) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strtrim(test2, " "), "abcde", 6) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strtrim(test3, " "), "", 1) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strtrim(test4, ""), "", 1) == 0) ? OK : KO);
}

void test_ft_strjoin()
{
	char	test1[] = "A ";
	char	test2[] = "";
	char	test3[] = "12345678";
	char	test4[] = "";
	
    printf("\nft_strjoin:");
    
	printf(" [%s]", (ft_memcmp(ft_strjoin(test1, "cat is not a dog"), "A cat is not a dog", 19) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strjoin(test2, "A cat is not a dog"), "A cat is not a dog", 18) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strjoin(test3, "12345678"), "1234567812345678", 17) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_strjoin(test4, ""), "", 1) == 0) ? OK : KO);
}

void test_ft_substr()
{
	char	test1[] = "A cat is not a dog.";
	
	
    printf("\nft_substr: ");
    
	printf(" [%s]", (ft_memcmp(ft_substr(test1, 2, 3), "cat", 4) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_substr(test1, 0, 5), "A cat", 5) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_substr(test1, 0, ft_strlen(test1)), "A cat is not a dog.", 19) == 0) ? OK : KO);
	printf(" [%s]", (ft_memcmp(ft_substr(test1, 2, 0), "", 1) == 0) ? OK : KO);
}
void test_ft_putendl_fd()
{
    
    
	ft_putendl_fd("\nft_putendl_fd:   [\033[0;32mOK\033[0m]", 1);
	
}

void test_ft_putstr_fd()
{
    
	ft_putstr_fd("ft_putstr_fd:    [\033[0;32mOK\033[0m]", 1);
	
}

void test_ft_putchar_fd()
{
    
	char	*str;

	str = "ft_putchar_fd:   [\033[0;32mOK\033[0m]\n";
	while (*str)
		ft_putchar_fd(*str++, 2);
	
}

char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

void test_ft_strmapi()
{
    printf("\nft_strmapi:");
    
	char	str[] = "abc";

	printf(" [%s]", (ft_memcmp(ft_strmapi(str, to_upper), "ABC", 4) == 0) ? OK : KO);
}

void to_upperv(unsigned int i, char *c)
{
    (void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
}

void test_ft_striteri()
{
	char	str[] = "abc";
	char	str1[] = "123abc";
	char	str2[] = "!@#$abc";
	char	str3[] = ";./,abc";
	
    printf("\nft_striteri:");
    
	ft_striteri(str, to_upperv);
	ft_striteri(str1, to_upperv);
	ft_striteri(str2, to_upperv);
	ft_striteri(str3, to_upperv);

	printf("[%s] ", (ft_memcmp(str, "ABC", 4) == 0) ? OK : KO);
	printf("[%s] ", (ft_memcmp(str1, "123ABC", 7) == 0) ? OK : KO);
	printf("[%s] ", (ft_memcmp(str2, "!@#$ABC", 8) == 0) ? OK : KO);
	printf("[%s] ", (ft_memcmp(str3, ";./,ABC", 8) == 0) ? OK : KO);
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
	test_ft_strnstr();
	test_ft_atoi();
	
	//test_ft_calloc();
	test_ft_strdup();
	
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	//test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	//test_ft_putnbr_fd();

	//test_ft_lstnew();
	//test_ft_lstadd_front();
	//test_ft_lstsize();
	//test_ft_lstlast();
	//test_ft_lstadd_back();
	//test_ft_lstdelone();
	//test_ft_lstclear();
	//test_ft_lstiter();
	//test_ft_lstmap();

}