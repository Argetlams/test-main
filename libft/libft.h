/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talemari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:16:39 by talemari          #+#    #+#             */
/*   Updated: 2016/12/14 15:09:07 by talemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "../debug.h"
# define TRUE 1
# define FALSE 0
# define INT_SIZE 2147483647
# define INT_NEG_SIZE -2147483648

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_vector2i
{
	int				x;
	int				y;
}					t_vector2i;

typedef int			t_bool;

void				ft_bzero(void *s, size_t n);
void				ft_lstadd(t_list **alst, t_list *newlst);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memalloc(size_t size);
void				*ft_memchr(void const *s, int c, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				*ft_memset(void *dest, int n, size_t len);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putlst(t_list const *lst);
void				ft_putnbendl(int n);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_puttab(char const **tab);
void				ft_puttab_fd(char const **tab, int fd);
void				ft_strclr(char *s);
void				ft_strdoubledel(char **str);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strdel(char **as);
char				*ft_itoa(int n);
char				*ft_strcatalloc(char *s1, char *s2);
char				*ft_strchr(char const *s, int c);
char				*ft_strrchr(char const *s, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strfreesub(char *s, unsigned int start, size_t len);
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strncat(char *s1, char const *s2, size_t n);
char				*ft_strdup(char const *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinfree(char *s1, char const *s2);
char				*ft_strmap(char const *s1, char (*f)(char));
char				*ft_strmapi(char const *s1, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_strrealloc(char *ptr, size_t newsize);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char const *big, char const *lit);
char				*ft_strnstr(char const *big, char const *lit, size_t len);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				**ft_tabcpy(char **dst, char const **src);
int					ft_abs(int x);
int					ft_atoi(char const *str);
int					ft_convert_base(int nb, int base);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isupper(int c);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
size_t				ft_strlcat(char *dst, char const *src, size_t size);
size_t				ft_strlen(char const *str);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_vector2i			vector2i(int x, int y);
#endif
