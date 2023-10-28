/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:45:08 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/28 12:43:59 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>

int	ft_isprint(char *str);
int	ft_isalpha(char *str);
int	ft_isdigit(char *str);
int	ft_isalnum(char *str);
int	ft_isascii(char *str);
int	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* #include "ft_memcpy.c"
# include "ft_memmove.c"
# include "ft_strlcpy.c"
# include "ft_strlcat.c"
# include "ft_toupper.c"
# include "ft_tolower.c"
# include "ft_strchr.c"
# include "ft_strrchr.c"
# include "ft_strncmp.c"
# include "ft_memchr.c"
# include "ft_memcmp.c"
# include "ft_strnstr.c"
# include "ft_atoi.c"
# include "ft_calloc.c"
# include "ft_strdup.c" */

#endif