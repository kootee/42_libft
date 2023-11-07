/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:01 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/07 14:00:51 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_strs(const char *s, char c)
{
	int	i;
	int	str_len;
	int	str_num;

	i = 0;
	str_len = ft_strlen(s);
	str_num = 0;
	while (s[i++])
	{
		while (s[i] == c && i < str_len)
			i++;
		while (s[i] != c && i < str_len)
			i++;
		if (!s[i] && s[str_len - 1] == c)
			return (str_num);
		str_num++;
	}
	return (str_num);	
}

char	**ft_split(char const *s, char c)
{
	char	**splt_ptr;
	int		i;
	int		j;
	int		l;
	int		num_of_strs;

	i = 0;
	j = 0;
	l = 0;
	num_of_strs = ft_count_strs(s, c);
	splt_ptr = malloc(sizeof(char *) * num_of_strs + 1);
	if (!splt_ptr)
		return (0);
	while (l < num_of_strs)
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
	splt_ptr[l] = 0;
	return (splt_ptr);
}
