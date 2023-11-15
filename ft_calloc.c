/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:48 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/14 11:43:37 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	//check that malloc can handle
	ptr = malloc(count * size);
	if (!ptr)
		return ((void *)0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
