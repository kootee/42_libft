/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:21 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/13 17:15:08 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len) 
	{
		i = 0;
		while ((*(haystack + i) == needle[i]) && len-- && *(haystack + i))
		{
			printf("i %i, len %zu, char %c | ", i, len, *(haystack + i));
			i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		printf("\nexiting loop, incrementing haystack\n");
		haystack++;
		len--;
		printf("haystack: %s len: %zu\n", haystack, len);
	}
	printf("returning null\n");
	printf("--------------\n");
	return (0);
}
