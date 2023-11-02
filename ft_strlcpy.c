/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:40:00 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/02 09:59:38 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	size;

	size = dstsize - 1;
	if (dstsize)
	{
		while (--dstsize)
			*dst++ = *src++;
		*dst = 0;
	}
	return (ft_strlen(src - size));
}
