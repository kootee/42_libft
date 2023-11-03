/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:01:16 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/03 17:48:12 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if ((ft_strlen(s) - start < 0) || ft_strlen(s) > len)
	{
		printf("allocating memory\n");
		substr = malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (0);
	}
	else 
	{
		printf("returning empty string\n");
		return (strdup(""));
	}
	while ((i < len && s[start + i]))
	{
		printf("%d ", i);
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	printf("\n returning %s", substr);
	return (substr);
}
