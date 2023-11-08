/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:01 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/08 10:58:55 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_count_strs(const char *s, char c)
{
	int	i;
	int	str_len;
	int	str_num;

	i = 0;
	str_len = ft_strlen(s);
	str_num = 0;
	while (s[i])
	{
		while (i < str_len && s[i] == c)
			i++;
		while (i < str_len && s[i] != c)
			i++;
		if (i == str_len && s[str_len - 1] == c)
			return (str_num);
		str_num++;
	}
	return (str_num);
}

void	ft_free(char **ptr, int num_of_strs)
{
	if (!num_of_strs)
	{
		while (num_of_strs--)
			free(ptr[num_of_strs - 1]);
	}
	free(ptr);
}

void	ft_set_strs(char const *s, char **ptr, int num_of_strs, char c)
{
	int		i;
	int		j;
	int		ptr_index;

	i = 0;
	j = 0;
	ptr_index = 0;
	while (ptr_index < num_of_strs)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		ptr[ptr_index] = ft_substr(s, i, j);
		if (!ptr[ptr_index])
			ft_free(ptr, num_of_strs);
		i += j;
		j = 0;
		ptr_index++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splt_ptr;
	int		num_of_strs;

	num_of_strs = ft_count_strs(s, c);
	splt_ptr = malloc(sizeof(char *) * num_of_strs + 1);
	if (!splt_ptr)
		return (0);
	ft_set_strs(s, splt_ptr, num_of_strs, c);
	splt_ptr[num_of_strs] = 0;
	return (splt_ptr);
}
