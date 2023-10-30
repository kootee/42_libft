/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:21 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/30 15:31:24 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if(!(needle[i]))
		return((char *)haystack);
	while (*haystack++ && len--)
	{
		j = len;
		while((*(haystack + i) == needle[i]) && (j > 0) && *(haystack + i))
		{
			printf("Haystack is at %s\n", (haystack + i));
			if(needle[i] == 0)
			{
				return((char *)haystack);
				printf("returning haystack\n");
			}
			i++;
			j--;
		}
		i = 0;
	} 
	return(0);	
}