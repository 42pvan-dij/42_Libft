
#ifndef LIBFT_H_
# define LIBFT_H_

#include <unistd.h>
#include <stdlib.h>

void *ft_memset(void *dest, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *str, int c, size_t len);
void *ft_calloc(size_t n, size_t size);

int ft_memcmp(const void *str1, const void *str2, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t n);
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strdup(const char *str);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr (const char *str, const char *to_find, size_t len);

// ^need to test all this shit
// part 2

char    *ft_substr(char const *s, unsigned int start, size_t len);          //untested
char	*ft_strjoin(char const *s1, char const *s2);                        //incomplete  
char    *ft_itoa(int n);                                                    //untested
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));             //untested
void ft_striteri(char *s, void (*f)(unsigned int, char*));                  //not sure if understood correctly otherwise untested








#endif