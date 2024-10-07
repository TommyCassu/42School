/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testUnit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:50:35 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 20:50:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "includes/libft.h"

void test(int condition, const char *message)
{
    if (condition)
        printf("OK : %s\n", message);
    else
        printf("KO : %s\n", message);
}

void test_ft_atoi()
{
    printf("Testing ft_atoi:\n");

    test(ft_atoi("123") == 123, "ft_atoi(\"123\") == 123");
    test(ft_atoi("-456") == -456, "ft_atoi(\"-456\") == -456");
    test(ft_atoi("+789") == 789, "ft_atoi(\"+789\") == 789");
    test(ft_atoi("   42") == 42, "ft_atoi(\"   42\") == 42");
    test(ft_atoi("42   ") == 42, "ft_atoi(\"42   \") == 42");
    test(ft_atoi("   -42   ") == -42, "ft_atoi(\"   -42   \") == -42");
    test(ft_atoi("123abc") == 123, "ft_atoi(\"123abc\") == 123");
    test(ft_atoi("0042") == 42, "ft_atoi(\"0042\") == 42");
    test(ft_atoi("2147483647") == 2147483647, "ft_atoi(\"2147483647\") == 2147483647");
    test(ft_atoi("-2147483648") == -2147483648, "ft_atoi(\"-2147483648\") == -2147483648");
    test(ft_atoi("") == 0, "ft_atoi(\"\") == 0");
    test(ft_atoi("abc") == 0, "ft_atoi(\"abc\") == 0");
    test(ft_atoi("+-42") == 0, "ft_atoi(\"+-42\") == 0");
    test(ft_atoi("-+42") == 0, "ft_atoi(\"-+42\") == 0");
}

void test_ft_isalnum()
{
    printf("Testing ft_isalnum:\n");

    test(ft_isalnum('a') == 1, "ft_isalnum('a') == 1");
    test(ft_isalnum('z') == 1, "ft_isalnum('z') == 1");
    test(ft_isalnum('A') == 1, "ft_isalnum('A') == 1");
    test(ft_isalnum('Z') == 1, "ft_isalnum('Z') == 1");
    test(ft_isalnum('0') == 1, "ft_isalnum('0') == 1");
    test(ft_isalnum('9') == 1, "ft_isalnum('9') == 1");
    test(ft_isalnum(' ') == 0, "ft_isalnum(' ') == 0");
    test(ft_isalnum('!') == 0, "ft_isalnum('!') == 0");
    test(ft_isalnum('\n') == 0, "ft_isalnum('\\n') == 0");
    test(ft_isalnum(0) == 0, "ft_isalnum(0) == 0");
    test(ft_isalnum(127) == 0, "ft_isalnum(127) == 0");
}

void test_ft_isalpha()
{
    printf("Testing ft_isalpha:\n");

    test(ft_isalpha('a') == 1, "ft_isalpha('a') == 1");
    test(ft_isalpha('z') == 1, "ft_isalpha('z') == 1");
    test(ft_isalpha('A') == 1, "ft_isalpha('A') == 1");
    test(ft_isalpha('Z') == 1, "ft_isalpha('Z') == 1");
    test(ft_isalpha('0') == 0, "ft_isalpha('0') == 0");
    test(ft_isalpha('9') == 0, "ft_isalpha('9') == 0");
    test(ft_isalpha(' ') == 0, "ft_isalpha(' ') == 0");
    test(ft_isalpha('!') == 0, "ft_isalpha('!') == 0");
    test(ft_isalpha('\n') == 0, "ft_isalpha('\\n') == 0");
    test(ft_isalpha(0) == 0, "ft_isalpha(0) == 0");
    test(ft_isalpha(127) == 0, "ft_isalpha(127) == 0");
    test(ft_isalpha('@') == 0, "ft_isalpha('@') == 0");
    test(ft_isalpha('[') == 0, "ft_isalpha('[') == 0");
    test(ft_isalpha('`') == 0, "ft_isalpha('`') == 0");
    test(ft_isalpha('{') == 0, "ft_isalpha('{') == 0");
}

void test_ft_isascii()
{
    printf("Testing ft_isascii:\n");

    test(ft_isascii('A') == 1, "ft_isascii('A') == 1");
    test(ft_isascii('z') == 1, "ft_isascii('z') == 1");
    test(ft_isascii('0') == 1, "ft_isascii('0') == 1");
    test(ft_isascii(' ') == 1, "ft_isascii(' ') == 1");
    test(ft_isascii('\n') == 1, "ft_isascii('\\n') == 1");
    test(ft_isascii(0) == 1, "ft_isascii(0) == 1");
    test(ft_isascii(127) == 1, "ft_isascii(127) == 1");
    test(ft_isascii(-1) == 0, "ft_isascii(-1) == 0");
    test(ft_isascii(128) == 0, "ft_isascii(128) == 0");
    test(ft_isascii(200) == 0, "ft_isascii(200) == 0");
    test(ft_isascii(-50) == 0, "ft_isascii(-50) == 0");
}

void test_ft_isprint()
{
    printf("Testing ft_isprint:\n");

    test(ft_isprint('A') == 1, "ft_isprint('A') == 1");
    test(ft_isprint('z') == 1, "ft_isprint('z') == 1");
    test(ft_isprint('0') == 1, "ft_isprint('0') == 1");
    test(ft_isprint(' ') == 1, "ft_isprint(' ') == 1");
    test(ft_isprint('~') == 1, "ft_isprint('~') == 1");
    test(ft_isprint('\n') == 0, "ft_isprint('\\n') == 0");
    test(ft_isprint('\t') == 0, "ft_isprint('\\t') == 0");
    test(ft_isprint(31) == 0, "ft_isprint(31) == 0");
    test(ft_isprint(127) == 0, "ft_isprint(127) == 0");
    test(ft_isprint(32) == 1, "ft_isprint(32) == 1");
    test(ft_isprint(126) == 1, "ft_isprint(126) == 1");
    test(ft_isprint(31) == 0, "ft_isprint(31) == 0");
    test(ft_isprint(127) == 0, "ft_isprint(127) == 0");
}
void test_ft_memcmp()
{
    printf("Testing ft_memcmp:\n");

    char str1[] = "Hello";
    char str2[] = "Hello, World!";
    char str3[] = "Hello";

    test(ft_memcmp(str1, str2, 5) == 0, "ft_memcmp(str1, str2, 5) == 0");
    test(ft_memcmp(str1, str2, 6) < 0, "ft_memcmp(str1, str2, 6) < 0");
    test(ft_memcmp(str2, str1, 6) > 0, "ft_memcmp(str2, str1, 6) > 0");
    test(ft_memcmp(str1, str3, 5) == 0, "ft_memcmp(str1, str3, 5) == 0");
    test(ft_memcmp(str1, str3, 6) == 0, "ft_memcmp(str1, str3, 6) == 0");
    test(ft_memcmp(str1, str2, 0) == 0, "ft_memcmp(str1, str2, 0) == 0");
}

void test_ft_strcat()
{
    printf("Testing ft_strcat:\n");
    
    char dest[50] = "Hello";
    char src[] = " World!";
    test(strcmp(ft_strcat(dest, src), "Hello World!") == 0, "ft_strcat(\"Hello\", \" World!\") == \"Hello World!\"");
    
    char dest2[50] = "";
    char src2[] = "Test";
    test(strcmp(ft_strcat(dest2, src2), "Test") == 0, "ft_strcat(\"\", \"Test\") == \"Test\"");
    
    char dest3[50] = "Prefix";
    char src3[] = "";
    test(strcmp(ft_strcat(dest3, src3), "Prefix") == 0, "ft_strcat(\"Prefix\", \"\") == \"Prefix\"");
}

void test_ft_strchr()
{
    printf("Testing ft_strchr:\n");
    
    char str[] = "Hello World!";
    test(ft_strchr(str, 'W') == &str[6], "ft_strchr(\"Hello World!\", 'W') == &str[6]");
    test(ft_strchr(str, 'o') == &str[4], "ft_strchr(\"Hello World!\", 'o') == &str[4]");
    test(ft_strchr(str, 'z') == NULL, "ft_strchr(\"Hello World!\", 'z') == NULL");
    test(ft_strchr(str, '\0') == &str[12], "ft_strchr(\"Hello World!\", '\\0') == &str[12]");
}

void test_ft_strcmp()
{
    printf("Testing ft_strcmp:\n");
    
    test(ft_strcmp("Hello", "Hello") == 0, "ft_strcmp(\"Hello\", \"Hello\") == 0");
    test(ft_strcmp("Hello", "World") < 0, "ft_strcmp(\"Hello\", \"World\") < 0");
    test(ft_strcmp("World", "Hello") > 0, "ft_strcmp(\"World\", \"Hello\") > 0");
    test(ft_strcmp("", "") == 0, "ft_strcmp(\"\", \"\") == 0");
    test(ft_strcmp("A", "a") < 0, "ft_strcmp(\"A\", \"a\") < 0");
}

void test_ft_strcpy()
{
    printf("Testing ft_strcpy:\n");
    
    char dest[20];
    test(strcmp(ft_strcpy(dest, "Hello"), "Hello") == 0, "ft_strcpy(dest, \"Hello\") == \"Hello\"");
    test(strcmp(ft_strcpy(dest, ""), "") == 0, "ft_strcpy(dest, \"\") == \"\"");
    test(strcmp(ft_strcpy(dest, "Long string test"), "Long string test") == 0, "ft_strcpy(dest, \"Long string test\") == \"Long string test\"");
}

void test_ft_strdup()
{
    printf("Testing ft_strdup:\n");
    
    char *dup = ft_strdup("Test string");
    test(strcmp(dup, "Test string") == 0, "ft_strdup(\"Test string\") == \"Test string\"");
    free(dup);
    
    dup = ft_strdup("");
    test(strcmp(dup, "") == 0, "ft_strdup(\"\") == \"\"");
    free(dup);
}

void test_ft_strlcat()
{
    printf("Testing ft_strlcat:\n");
    
    char dest[20] = "Hello";
    test(ft_strlcat(dest, " World!", 20) == 12, "ft_strlcat(\"Hello\", \" World!\", 20) == 12");
    test(strcmp(dest, "Hello World!") == 0, "dest == \"Hello World!\"");
    
    char dest2[20] = "Hello";
    test(ft_strlcat(dest2, " World!", 10) == 12, "ft_strlcat(\"Hello\", \" World!\", 10) == 12");
    test(strcmp(dest2, "Hello Wor") == 0, "dest2 == \"Hello Wor\"");
    
    char dest3[20] = "";
    test(ft_strlcat(dest3, "Hello", 5) == 5, "ft_strlcat(\"\", \"Hello\", 5) == 5");
    test(strcmp(dest3, "Hell") == 0, "dest3 == \"Hell\"");
}

void test_ft_strlen()
{
    test(ft_strlen("Hello") == 5, "ft_strlen(\"Hello\") == 5");
    test(ft_strlen("") == 0, "ft_strlen(\"\") == 0");
    test(ft_strlen("12345") == 5, "ft_strlen(\"12345\") == 5");
}

int main()
{
    printf("Testing ft_strlen:\n");
    test_ft_strlen();
    
    printf("\nTesting ft_atoi:\n");
    test_ft_atoi();
    
    // Ajoutez d'autres tests ici
    
    return 0;
}
    /* ft_bzero */
    /* ft_isalnum */
    /* ft_isalpha */
    /* ft_isascii */
    /* ft_isdigit */
    /* ft_isprint */
    /* ft_memchr */

