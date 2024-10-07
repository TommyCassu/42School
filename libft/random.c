#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int ft_atoi(char *str)
{
    int i;
    int sign;
    int countsign;
    int result;

    i = 0;
    sign = 1;
    countsign = 0;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        countsign++;
        if (countsign > 1)
            return (0);
        if  (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}
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