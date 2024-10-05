#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

/* Basics functions */
int ft_atoi(char *str);
int tolower(int c);
int toupper(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, size_t n);
int	ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strchr(const char *s, int c);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, size_t n);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

/* Memory functions */
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strdup(const char *str);

#endif