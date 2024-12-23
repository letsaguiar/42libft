#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>


typedef int t_bool;
# define TRUE 1
# define FALSE 0

typedef char* t_string;

typedef long long t_number;

int     ft_isblank(int c);

int     ft_isupper(int c);

int     ft_islower(int c);

int     ft_isalpha(int c);

int     ft_isdigit(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isprint(int c);

size_t  ft_strlen(const char *s);

void    *ft_memset(void *s, int c, size_t n);

void    ft_bzero(void *s, size_t n);

void    *ft_memcpy(void *dest, const void *src, size_t n);

void    *ft_memmove(void *dest, const void *src, size_t n);

size_t  ft_strlcpy(char *dest, const char *src, size_t n);

size_t  ft_strlcat(char *dest, const char *src, size_t n);

int     ft_toupper(int c);

int     ft_tolower(int c);

char    *ft_strchr(const char *s, int c);

char    *ft_strrchr(const char *s, int c);

int     ft_strncmp(const char *s1, const char *s2, size_t n);

void    *ft_memchr(const void *s, int c, size_t n);

int     ft_memcmp(const void *s1, const void *s2, size_t n);

char    *ft_strnstr(const char *haystack, const char *needle, size_t n);

int     ft_atoi(const char *s);

void    *ft_calloc(size_t n, size_t size);

char    *ft_strdup(const char *s);

char    *ft_substr(const char *s, size_t start, size_t len);

char    *ft_strjoin(const char *s1, const char *s2);

char    *ft_strtrim(const char *s, const char *set);

char    **ft_split(const char *s, char c);

char    *ft_itoa(t_number n);

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));

void    ft_striteri(const char *s, void (*f)(unsigned int, char *));

void    ft_putchar_fd(char c, int fd);

void    ft_putstr_fd(const char *s, int fd);

void    ft_putendl_fd(const char *s, int fd);

void    ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list  *ft_lstnew(void *content);

void    ft_lstadd_front(t_list **list, t_list *new);

size_t  ft_lstsize(t_list *list);

t_list  *ft_lstlast(t_list *list);

void    ft_lstadd_back(t_list **list, t_list *new);

void    ft_lstdelone(t_list *list, void (*del)(void *));

void    ft_lstclear(t_list **list, void (*del)(void *));

void    ft_lstiter(t_list *list, void (*f)(void *));

t_list  *ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *));

char    *ft_itoa_base(unsigned long long n, int base, char *digits);

void    ft_throw(const char *msg);

#endif