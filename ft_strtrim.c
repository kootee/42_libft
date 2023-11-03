/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:46:59 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/03 18:48:43 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strcpy;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
	{
		printf(" %d ", i);
		i++;
	}
	printf("\ni ends in %d\n", i);
	while (ft_strchr(set, s1[len - j - 1]))
	{
		printf(" %d ", j);
		j++;
	}
	printf("\nj ends in %d\n", j);
	printf("substring len is %d\n", len - i - j);
	strcpy = ft_substr(s1, i, len - i - j);
	return (strcpy);
}
