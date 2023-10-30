/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:48 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/30 18:09:57 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ptr;
	int		len;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (!(dest))
		return ((char *)0);
	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	*ptr = 0;
	return (dest);
}