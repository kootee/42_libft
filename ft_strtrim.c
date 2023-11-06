/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:46:59 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/06 15:41:05 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_cpy;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !set)
		return (0);
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < len)
		i++;
	if (i > len)
		return ("");
	while (len - j - 1 >= 0 && ft_strchr(set, s1[len - j - 1]))
		j++;
	str_cpy = ft_substr(s1, i, len - i - j);
	return (str_cpy);
}
