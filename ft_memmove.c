/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:54:20 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/01 12:07:11 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_ptr;

	src_ptr = ft_strdup(src);
	while (len--)
		*(unsigned char *)dst++ = *src_ptr++;
	return (dst);
}
