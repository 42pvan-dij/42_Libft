#ifndef LIBFT_H_
# define LIBFT_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *dest, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(void *buf, int c, size_t len);
void *ft_calloc(size_t n, size_t size);

int ft_memcmp(const void *str1, const void *str2, size_t len);
int	ft_strncmp(char *s1, char *s2, size_t n);
int ft_atoi(const char *str);

int ft_tolower(int c);
int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);

int	ft_intlen(int val);

size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);

char *ft_strdup(const char *str);
char *ft_strrchr(const char *s, int c);
char *ft_strchr(char *s, int c);
char *ft_strnstr (const char *str, const char *to_find, size_t len);
char *ft_strrev(char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len);          //untested
char	*ft_strjoin(char const *s1, char const *s2);                        //incomplete  
char    *ft_itoa(int n);                                                    //untested
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));           //untested
char 	*ft_strtrim(char const *s1, char const *set);						//untested
char	**ft_split(char const *s, char c);

void ft_striteri(char *s, void (*f)(unsigned int, char*));                  //not sure if understood correctly otherwise untested
void ft_putchar_fd(char c, int fd);	//untested
void ft_putstr_fd(char *s, int fd);	//untested
void ft_putendl_fd(char *s, int fd);	//untested
void ft_putnbr_fd(int n, int fd); //untested





#endif