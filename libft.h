/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:21:29 by mnegro            #+#    #+#             */
/*   Updated: 2023/07/28 16:08:16 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* HEADER FILES */
# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/* MACROS */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* STRUCTURES */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* PROTOTYPES */
/* LIBFT (bonus) */
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* FT_PRINTF (mandatory)*/
/* ft_chars.c */
int		ft_print_c(int c);
int		ft_print_str(char *str);
int		ft_print_percent(void);
/* ft_hex.c */
int		ft_get_hex_len(unsigned int n);
int		ft_print_hex(unsigned int n, const char format);
/* ft_nbrs.c */
char	*ft_unsigned_itoa(unsigned int n);
int		ft_print_nbr(int n);
int		ft_print_unsigned_nbr(unsigned int n);
/* ft_printf.c */
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
/* ft_voidptr.c */
int		ft_get_voidptr_len(unsigned long n);
int		ft_print_voidptr(unsigned long n);

/* GET_NEXT_LINE (bonus) */
/* get_next_line_bonus.c */
char	*ft_copy_to_new(char **buftomem);
void	ft_read_from_fd(int fd, char **buftomem);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_next_line(int fd);
/* get_next_line_utils_bonus */
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_clean_buftomem(char *buftomem, int i);
int		ft_find_newline(char *buftomem);
char	*ft_free(char **buf);

#endif
