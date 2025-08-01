/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:44:18 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 19:20:02 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int ch);
int		ft_isprint(int c);
void	*ft_memchr(const void *pointer, int value, size_t count);
int		ft_memcmp(void *pointer1, void *pointer2, size_t size);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t numBytes);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(char *str, int character);
char	*ft_strdup(char *src);
size_t	ft_strlcat( char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t bytes);
size_t	ft_strlen(const char *ch);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);




#endif