/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:11:40 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/01 10:26:48 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_size;

	dst_size = ft_strlen(dst);

	while((size - dst_size - 1) && *src)
		dst[dst_size++] = *src++;
	
	dst[dst_size] = 0;
	return (size - 1);
}