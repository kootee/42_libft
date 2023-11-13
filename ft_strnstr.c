/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:21 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/13 16:23:23 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		while ((*(haystack + i) == needle[i]) && len-- && *(haystack + i))
		{
			i++;
			if (needle[i] == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
