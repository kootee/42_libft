/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:21 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/30 17:32:38 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if(!(*needle))
		return((char *)haystack);
	while (*haystack++ && len--)
	{
		i = 0;
		j = len;
		while((*(haystack + i) == needle[i]) && j-- && *(haystack + i))
		{
			i++;
			if(needle[i] == 0)
				return((char *)haystack);
		}
	} 
	return(0);	
}