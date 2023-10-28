/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:37:13 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/28 12:28:34 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;

	d = dest;

	while (n--)
		*d++ = (unsigned char)src++;
	
	return(dest);
}