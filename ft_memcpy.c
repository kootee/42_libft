/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:37:13 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/30 13:46:42 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* Check for overlap!!! */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst_ptr;
	unsigned char *src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;

	while (n--)
		*dst_ptr++ = *src_ptr++;
	
	return(dst);
}