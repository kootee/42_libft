/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:09:42 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/28 12:35:29 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tests for r1 libft */

#include "libft.h"

void	test_memcpy(void)
{
	char a[6] = "Hello";
	char b[6] = "Hello";
	ft_memset(a, 'A', 4);
	memset(b, 'A', 4);
	printf("Memset resut: %s\n", a);
	printf("Memset resut: %s\n", b);
}

void	test_memset(void)
{
	char a[6] = "Hello";
	char b[6] = "Hello";
	ft_memset(a, 'A', 4);
	memset(b, 'A', 4);
	printf("Memset test resut: %s\n", a);
	printf("Memset test resut: %s\n", b);
}

int	main(void)
{
	test_memset();
	return(0);
}