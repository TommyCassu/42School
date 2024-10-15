#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "includes/libft.h"

#define OK "\033[0;32mOK\033[0m"
#define KO "\033[0;31mKO\033[0m"

void test_ft_atoi()
{
    char *tests[] = {" -123abc", "2147483647", "-2147483648", "   +42"};
    printf("ft_atoi:\n");
    for (int i = 0; i < 4; i++)
        printf("  Test %d: %s\n", i + 1, (ft_atoi(tests[i]) == atoi(tests[i])) ? OK : KO);
}

void test_ft_bzero()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    printf("ft_bzero:\n");
    
    ft_bzero(str1, 5);
    bzero(str2, 5);
    printf("  Test 1: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1 + 7, 3);
    bzero(str2 + 7, 3);
    printf("  Test 2: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, 0);
    bzero(str2, 0);
    printf("  Test 3: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
    
    ft_bzero(str1, 20);
    bzero(str2, 20);
    printf("  Test 4: %s\n", (memcmp(str1, str2, 20) == 0) ? OK : KO);
}

void test_char_funcs(int (*ft_func)(int), int (*std_func)(int), const char *name)
{
    int tests[] = {'a', '1', ' ', -1};
    printf("%s:\n", name);
    for (int i = 0; i < 4; i++)
        printf("  Test %d: %s\n", i + 1, (!!ft_func(tests[i]) == !!std_func(tests[i])) ? OK : KO);
}

void test_ft_memchr()
{
    char str[] = "Hello, World!";
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

void test_ft_strcat()
{
    char dest1[20] = "Hello";
    char dest2[20] = "Hello";
    
    printf("ft_strcat:\n");
    
    printf("  Test 1: %s\n",
           (strcmp(ft_strcat(dest1, " World"), strcat(dest2, " World")) == 0) ? OK : KO);

    strcpy(dest1,"Hello"); // Resetting dest for next test
	strcpy(dest2,"Hello"); // Resetting dest for next test
	printf("  Test 2: %s\n",
           (strcmp(ft_strcat(dest1,"!"), strcat(dest2,"!"))==0)?OK:KO);

	strcpy(dest1,"Hello"); // Resetting dest for next test
	strcpy(dest2,"Hello"); // Resetting dest for next test
	printf("  Test 3: %s\n",
           (strcmp(ft_strcat(dest1,""), strcat(dest2,""))==0)?OK:KO);

	char empty[10] = "";
	printf("  Test 4: %s\n",
           (strcmp(ft_strcat(empty,"Hello"), strcat(empty,"Hello"))==0)?OK:KO); 
}
void test_ft_strchr()
{
    char *str = "Hello, World!";
    printf("ft_strchr:\n");
    printf("  Test 1: %s\n", (ft_strchr(str, 'o') == strchr(str, 'o')) ? OK : KO);
    printf("  Test 2: %s\n", (ft_strchr(str, 'z') == strchr(str, 'z')) ? OK : KO);
    printf("  Test 3: %s\n", (ft_strchr(str, 'H') == strchr(str, 'H')) ? OK : KO);
    printf("  Test 4: %s\n", (ft_strchr(str, '\0') == strchr(str, '\0')) ? OK : KO);
}

void test_ft_strcmp()
{
    printf("ft_strcmp:\n");
    printf("  Test 1: %s\n", (ft_strcmp("Hello", "Hello") == strcmp("Hello", "Hello")) ? OK : KO);
    printf("  Test 2: %s\n", (ft_strcmp("Hello", "Hellx") < 0 && strcmp("Hello", "Hellx") < 0) ? OK : KO);
    printf("  Test 3: %s\n", (ft_strcmp("Hellx", "Hello") > 0 && strcmp("Hellx", "Hello") > 0) ? OK : KO);
    printf("  Test 4: %s\n", (ft_strcmp("", "") == strcmp("", "")) ? OK : KO);
}

void test_ft_strcpy()
{
    char dest1[20], dest2[20];
    printf("ft_strcpy:\n");
    printf("  Test 1: %s\n", (strcmp(ft_strcpy(dest1, "Hello"), strcpy(dest2, "Hello")) == 0) ? OK : KO);
    printf("  Test 2: %s\n", (strcmp(ft_strcpy(dest1, ""), strcpy(dest2, "")) == 0) ? OK : KO);
    printf("  Test 3: %s\n", (strcmp(ft_strcpy(dest1, "Hello, World!"), strcpy(dest2, "Hello, World!")) == 0) ? OK : KO);
    printf("  Test 4: %s\n", (ft_strcpy(dest1, "Test") == dest1 && strcmp(dest1, "Test") == 0) ? OK : KO);
}

void test_ft_strdup()
{
    char *str = "Hello, World!";
    char *dup1 = ft_strdup(str);
    char *dup2 = strdup(str);
    
    printf("ft_strdup:\n");
    printf("  Test 1: %s\n", (strcmp(dup1, dup2) == 0) ? OK : KO);
    
    free(dup1); 
    free(dup2);

    dup1 = ft_strdup("");
    dup2 = strdup("");
    
    printf("  Test 2: %s\n", (strcmp(dup1, dup2) == 0) ? OK : KO);
    
    free(dup1); 
    free(dup2);

    dup1 = ft_strdup("Test");
    dup2 = strdup("Test");
    
    printf("  Test 3: %s\n", (strcmp(dup1, dup2) == 0) ? OK : KO);
    
    free(dup1); 
    free(dup2);

    dup1 = ft_strdup("\0Hidden");
    dup2 = strdup("\0Hidden");
    
    printf("  Test 4: %s\n", (strcmp(dup1, dup2) == 0) ? OK : KO);
    
    free(dup1); 
    free(dup2);
}

void test_ft_strlcat()
{
    char dest1[20] = "Hello";
    char dest2[20] = "Hello";
    
    printf("ft_strlcat:\n");
    
    // Test 1
    size_t result1 = ft_strlcat(dest1, " World", sizeof(dest1));
    size_t result2 = strlen("Hello") + strlen(" World");
    printf("  Test 1: %s\n", (result1 == result2 && strcmp(dest1, "Hello World") == 0) ? OK : KO);

    // Resetting dest for next test
    strcpy(dest1, "Hello");
    strcpy(dest2, "Hello");

    // Test 2
    result1 = ft_strlcat(dest1, "!", sizeof(dest1));
    result2 = strlen("Hello") + strlen("!");
    printf("  Test 2: %s\n", (result1 == result2 && strcmp(dest1, "Hello!") == 0) ? OK : KO);

    // Resetting dest for next test
    strcpy(dest1, "Hello");
    strcpy(dest2, "Hello");

    // Test 3
    result1 = ft_strlcat(dest1, " World!", sizeof(dest1));
    printf("  Test 3: %s\n", (result1 == strlen("Hello") + strlen(" World!") && strcmp(dest1, "Hello World!") == 0) ? OK : KO);


    // Resetting dest for next test
    char empty[10] = "";
    
    // Test 4
    result1 = ft_strlcat(empty, "Hello", sizeof(empty));
    printf("  Test 4: %s\n", (result1 == strlen("Hello") && strcmp(empty, "Hello") == 0) ? OK : KO);
}
int main()
{
    test_ft_atoi();
    test_ft_bzero();
    
	test_char_funcs(ft_isalnum,isalnum,"ft_isalnum");
	test_char_funcs(ft_isalpha,isalpha,"ft_isalpha");
	test_char_funcs(ft_isascii,isascii,"ft_isascii");
	test_char_funcs(ft_isdigit,isdigit,"ft_isdigit");
	test_char_funcs(ft_isprint,isprint,"ft_isprint");

	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memset();
	test_ft_strcat();
    test_ft_strchr();
    test_ft_strcmp();
    test_ft_strcpy();
    test_ft_strdup();
    test_ft_strlcat();

	return (0);
}
