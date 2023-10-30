/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:40 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/30 13:46:23 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int dst_size;

	dst_size = ft_strlen(dst);

	while((size - dst_size - 1) && *src)
		dst[dst_size++] = *src++;
	
	dst[dst_size] = 0;
	return (size - 1);
}