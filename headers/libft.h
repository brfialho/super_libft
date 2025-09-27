/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:45:30 by brfialho          #+#    #+#             */
/*   Updated: 2025/09/27 17:05:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_free(char **s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isnumspace(int c);
int		lst_size(t_list *lst);
int		ft_atoi(const char *nptr);
int		ft_split_len(char **split);
int		ft_printf(const char *s, ...);
int		ft_atoi_base(const char *nptr, const char *base);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_split_free(char**split);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	lst_add_end(t_list **lst, t_list *new);
void	lst_add_start(t_list **lst, t_list *new);
void	lst_for_each(t_list *lst, void (*f)(void *));
void	lst_del_node(t_list *lst, void (*del)(void*));
void	lst_del_all(t_list **lst, void (*del)(void*));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_itoa(int n);
char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa_base(int n, char *base);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);

char	**ft_split(char const *s, char c);

void	*ft_memset(void	*s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

t_list	*lst_last(t_list *lst);
t_list	*lst_new_node(void *content);
t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif