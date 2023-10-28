/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:09:42 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/28 15:06:29 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tests for libft */

#include "libft.h"

void	test_memcpy(void)
{
	printf("Testing memcpy\n");
	char a[7] = "abcdefg";
	char b[7] = "hijklmn";
	ft_memcpy(a, b, 4);
	memcpy(a, b, 4);
	printf("Memset resut: %s\n", a);
	printf("Memset resut: %s\n", b);
}

void	test_memset(void)
{
	printf("Testing memset\n");
	char a[6] = "Hello";
	char b[6] = "Hello";
	ft_memset(a, 'A', 4);
	memset(b, 'A', 4);
	printf("Memset test resut: %s\n", a);
	printf("Memset test resut: %s\n", b);
}

void	test_memmove(void)
{
	printf("Testing memmove\n");
	char a[6] = "iiiii";
	char b[6] = "uuuuu";
	ft_memmove(a, b, 3);
	printf("memmove result is %s\n", a);
}

void	test_strlcpy(void)
{
	printf("testing strlcpy\n");
	char a[6] = "iiiii";
	char b[6] = "uuuuu";
	char c[6] = "tttttt";
	char d[6] = "vvvvvv";
	int size;
	size = ft_strlcpy(a, b, 3);
	strlcpy(c, d, 3);
	printf("result from strlcpy is %s %d\n", a, size);
	printf("lib function gives %s\n", c);
}

int	main(void)
{
	test_memcpy();
	test_memset();
	test_memmove();
	test_strlcpy();
	return(0);
}