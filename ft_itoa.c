/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:36:46 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/08 16:39:18 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_length(long n)
{
	int	i;

	i = 0;
	if (!n)
		i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	int		count;

	num = n;
	count = check_length(num);
	if (num < 0)
	{
		num = num * -1;
		ptr = malloc(sizeof(char) * count + 2);
		ptr[0] = '-';
	}
	else
		ptr = malloc(sizeof(char) * count + 1);
	if (!ptr)
		return (0);
	if (!n)
		ptr[0] = '0';
	ptr[count] = 0;
	while (num > 0)
	{
		ptr[--count] = '0' + (num % 10);
		num /= 10;
	}
	return (ptr);
}
