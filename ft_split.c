/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:01 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/06 15:58:05 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splt_ptr;
	int		len;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	splt_ptr = malloc(sizeof(char) * len + 1);
	if (!splt_ptr)
		return (0);
	while (l < len)
	{
		while (s[i] && s[i] == c)
		{
			printf("> %d ", i);
			i++;
		}
		while (s[i + j] && s[i + j] != c)
		{
			printf("> %c ", s[i + j]);
			j++;
		}
		splt_ptr[l] = ft_substr(s, i, j);
		j = 0;
		l++;
		printf("l is %d\n", l);
	}
	return (splt_ptr);
}
