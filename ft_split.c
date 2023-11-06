/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:01 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/06 17:07:23 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_strs(const char *s, char c)
{
	printf("inside count %s\n", s);
	int	i;
	int	str_num;

	i = 0;
	str_num = 0;
	while (s[i++])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		str_num++;
	}
	printf("str_num is %d\n", str_num);
	return (str_num);	
}

char	**ft_split(char const *s, char c)
{
	char	**splt_ptr;
	int		len;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = ft_count_strs(s, c);
	if (!s)
		return (0);
	len = ft_strlen(s);
	splt_ptr = malloc(sizeof(char) * len + 1);
	if (!splt_ptr)
		return (0);
	while (l < len)
	{
		while (s[i] && s[i] == c)
			i++;

		while (s[i + j] && s[i + j] != c)
			j++;

		splt_ptr[l] = ft_substr(s, i, j);
		i += j;
		j = 0;
		l++;
	}
	return (splt_ptr);
}
