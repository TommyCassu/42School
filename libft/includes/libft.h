#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, int n);
int	ft_strlen(char *str);
int tolower(int c);
int toupper(int c);
char    *ft_strcat(char *dest, char *src);

#endif