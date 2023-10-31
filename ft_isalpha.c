/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:41:53 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/31 16:50:14 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char *str)
{
	if(!*str)
		return(0);
	while (*str)
	{
		if((*str < 'A' || *str > 'z') || (*str > 'Z' && *str < 'a'))
			return(0);
		str++;
	}
	return (1);
}