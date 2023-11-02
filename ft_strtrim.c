/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:46:59 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/02 15:23:45 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strcpy;
	int		len;
	int		i;

	i = 0;
	while (*s1++ == *set++)
		i++;
	if (!*set)
	{
		printf("set was not empty\n");
		return (0);
	}
	while (s1[len] == set[len])
	{
		/* code */
	}
	
	len = ft_strlen(s1);
	strcpy = ft_substring(s1, i, len);

	if (*s1 == *set)
	{
		if (*s1 != *set)
			return (0);
		while (*s1 == *set)
		{
			/* 123abcdefgh123 */
		}	
	}while (*s1)
	{
		
	}
	
}