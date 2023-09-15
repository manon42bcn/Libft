/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mporras- <manon42bcn@yahoo.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:34:55 by mporras-          #+#    #+#             */
/*   Updated: 2023/06/30 21:26:26 by mporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

# define BUFFER_SIZE	1024
# define TRUE			1
# define FALSE			0
# define ERROR			1
# define SUCCESS		0

typedef int	t_bool;

//Extended
long double	ft_atolf(char *str);
void		ft_char_replace(char **s, char org, char new);
size_t		ft_strlenchar(const char *s, char c);
int			ft_strict_lenchar(const char *s, char c);
size_t		ft_strlen_max(const char *s, size_t max);
size_t		ft_count_char(const char *s, char c);
char		ft_last_char(char *s);
void		ft_init_vector(int *vector, int value, int size);
void		ft_safe_free_char(char **s);
int			ft_check_by_fnc(char *s, int (f)(int));
char		*ft_remove_lit(char *s, char c);
char		**ft_split_cs(const char *str, char *charset);
int			ft_strcmp(char *s1, char *s2);
int			ft_strict_n_cmp(char *s1, char *s2, size_t l1, size_t l2);
int			ft_strict_cmp(char *s1, char *s2);
int			ft_strncmp_fnc(char *s1, char *s2, size_t n, int (*str_to)(int));
t_bool		ft_match_cmp(char *s1, char *s2);
char		*ft_strjoin_char(char const *s1, char const *s2, char sep);
char		*ft_strjoin_clean_char(char **s1, char **s2, char sep, int clean);
char		*ft_strjoin_clean(char **s1, char **s2, int clean);
char		*ft_strjoin_clean_one(char **s1, char *s2);
char		*ft_strjoin_clean_two(char *s1, char **s2);
char		*ft_strjoin_clear_ptn(char *s1, char *s2, int clean);
char		*ft_strndup(const char *src, size_t len);
char		*ft_strnjoin(char const *s1, char const *s2,
				size_t len_s1, size_t len_s2);
char		*ft_strnjoin_clean(char *s1, char *s2,
				size_t len_s1, size_t len_s2);
t_bool		ft_is_charset(char c, char *charset);
size_t		ft_len_charset(char const *s, char *charset);
char		*ft_strnstr_end(const char *haystack, const char *needle,
				size_t loc);
size_t		ft_strnstr_len(const char *haystack, const char *needle,
				size_t len);
char		*ft_strtrim_clean(char *s1, char const *set);
void		ft_clear_tabs(char **tab);
size_t		ft_count_tab(char **s);
void		ft_sort_str_tab(char **tab);
void		*ft_sec_malloc(size_t size);
void		*ft_sec_calloc(size_t size);
void		ft_perror(char *msg);
void		ft_my_perror(char *exc, char *msg);
void		ft_sec_free(void *ptr);
//gnl
char		*get_next_line(int fd);
char		*ft_substr_gnl(char *s, int start, int len, int *nl_len);
char		*ft_strjoin_gnl(char *s1, char *s2, int bytes, int *nl_len);
char		*ft_line_proccess(char **buffer, int bytes, int *nl_len);
char		*ft_buffer_reader(int fd, char **buffer, char *reader, int *nl_len);
char		*ft_delete_line_from_buffer(char **buffer, int *nl_len);
int			ft_get_endline(char *str);
//
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *src);
size_t		ft_strlcat(char *dest, char *src, size_t dstsize);
size_t		ft_strlcpy(char *dest, char *src, size_t destsize);
size_t		ft_strlen(const char *s);
int			ft_strncmp(char *s1, char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t loc);
char		*ft_strrchr(const char *s, int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
