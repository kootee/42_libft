/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:01:16 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/03 18:50:34 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len > start && (s_len - start) >= len)
		substr = malloc(sizeof(char) * (len + 1));
	else if ((s_len - start) < len)
		substr = malloc(sizeof(char) * (s_len - start));
	else
		return (ft_strdup(""));
	if (!substr)
		return (0);
	while ((i < len && s[start + i]))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	printf("\nreturning substring %s\n", substr);
	return (substr);
}
