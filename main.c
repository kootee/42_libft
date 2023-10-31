/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:33 by ktoivola          #+#    #+#             */
/*   Updated: 2023/10/31 11:47:06 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tests for libft */

#include "libft.h"

void	test_memcpy(void)
{
	printf("-------------------------\n\n");
	printf("Testing memcpy\n");
	char a[9] = "abcdefgh";
	char b[7] = "hijklm";
	char c[9] = "abcdefgh";
	char d[7] = "hijklm";
	ft_memcpy(a, b, 4);
	memcpy(c, d, 4);
	printf("memcpy resut: %s\n", a);
	printf("lib resut: %s\n", c);
}

void	test_memset(void)
{
	printf("-------------------------\n\n");
	printf("Testing memset\n");
	char a[6] = "Hello";
	char b[6] = "Hello";
	ft_memset(a, 'A', 4);
	memset(b, 'A', 4);
	printf("memset test resut: %s\n", a);
	printf("lib resut: %s\n", b);
}

void	test_memmove(void)
{
	printf("-------------------------\n\n");
	printf("Testing memmove\n");
	char a[6] = "iiiii";
	char b[6] = "uuuuu";
	ft_memmove(a, b, 3);
	printf("memmove result is %s\n", a);
}

void	test_strlcpy(void)
{
	printf("-------------------------\n\n");
	printf("Testing strlcpy\n");
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

void	test_strlcat(void)
{
	printf("-------------------------\n\n");
	printf("Testing strcat\n");
	char a[7] = "bana";
	char b[3] = "na";
	char c[7] = "bana";
	char d[3] = "na";
	int size;
	int lib_size;
	size = ft_strlcat(a, b, 7);
	lib_size = strlcat(c, d, 7);
	printf("result from strlcat is %s %d\n", a, size);
	printf("lib function gives %s %d\n", c, lib_size);
}

void	test_toupper(void)
{
	printf("-------------------------\n\n");
	printf("Testing toupper\n");
	int	a = 97;
	int b = 122;
	int c = 62;
	a = ft_toupper(a);
	b = ft_toupper(b);
	c = ft_toupper(c);
	printf("result is %c %c %c\n", a, b, c);
}

void	test_tolower(void)
{
	printf("-------------------------\n\n");
	printf("Testing tolower\n");
	int	a = 'A';
	int b = 'Z';
	int c = 63;
	a = ft_tolower(a);
	b = ft_tolower(b);
	c = ft_tolower(c);
	printf("result is %c %c %c\n", a, b, c);
}

void	test_strchr(void)
{
	printf("-------------------------\n\n");
	printf("Testing strchr\n");
	char a[6] = "abcde";
	int	b = 'c';
	printf("result is %s\n", ft_strchr(a, b));
	char c[6] = "abcde";
	int	d = 'D';
	printf("result is %s\n", ft_strchr(c, d));
	printf("lib result is %s\n", strchr(c, d));
}

void	test_strrchr(void)
{
	printf("-------------------------\n\n");
	printf("Testing strrchr\n");
	char a[10] = "pineapple";
	int	b = 'p';
	printf("result is %s\n", ft_strrchr(a, b));
	printf("lib result is %s\n", strrchr(a, b));
	char c[6] = "abcde";
	int	d = 'D';
	printf("result is %s\n", ft_strrchr(c, d));
	printf("lib result is %s\n", strrchr(c, d));
}

void	test_strncmp(void)
{
	printf("-------------------------\n\n");
	printf("Testing strncmp\n");
	printf("1 Comparison results %d \n", ft_strncmp("ABCD ", "ABCd", 40));
	printf("2 Comparison results %d \n", ft_strncmp("", "Kadabra", 3));
	printf("3 Comparison results %d \n", ft_strncmp("   ", "    ", 7));
	printf("4 Comparison results %d \n", ft_strncmp("", "", 2));
	printf("5 Comparison results %d \n", ft_strncmp("pineapple", "pineapple", 10));
}

void	test_memcmp(void)
{
	printf("-------------------------\n\n");
	printf("Testing memcmp\n");
	printf("1 Comparison results %d \n", ft_memcmp("ABCD ", "ABCd", 40));
	printf("2 Comparison results %d \n", ft_memcmp("", "Kadabra", 3));
	printf("3 Comparison results %d \n", ft_memcmp("   ", "    ", 7));
	printf("4 Comparison results %d \n", ft_memcmp("", "", 2));
	printf("5 Comparison results %d \n", ft_memcmp("", "", 0));
	printf("6 Comparison results %d \n", ft_memcmp("pineapple", "pineapple", 10));
}

void	test_strnstr(void)
{
	printf("-------------------------\n\n");
	printf("Testing strnstr\n");
	printf("1 Comparison results %s\n", ft_strnstr("Pineapple ", "apple", 20));
	printf("2 Comparison results %s\n", ft_strnstr("AbraKadabra", "Kadabra", 20));
	printf("3 Comparison results %s\n", ft_strnstr("A vry long sentence to look in ", "vry", 20));
	printf("4 Comparison results %s\n", ft_strnstr("onetwothrefourfivesixseveneight", "six", 20));
	printf("5 Comparison results %s\n", ft_strnstr("Pineapple ", "apple", 4));
	printf("6 Comparison results %s\n", ft_strnstr("AbraKadabra", "Kadabra", 4));
	printf("7 Comparison results %s\n", ft_strnstr("_   _   _", "", 7));
	printf("8 Comparison results %s\n", ft_strnstr("", "", 2));
	printf("9 Comparison results %s\n", ft_strnstr("^*^", "", 0));
	printf("10 Comparison results %s\n", ft_strnstr("pineapple", "orange", 10));
}

void	test_atoi(void)
{
	printf("-------------------------\n\n");
	printf("Testing atoi\n");
	printf("Should print: 123456: %d \n", ft_atoi(" --+++++--+123456ab567"));
	printf("Should print 1267: %d \n", ft_atoi(" --+1267"));
	printf("Should print -567: %d \n", ft_atoi(" ---++567"));
	printf("Should print -154862445: %d \n", ft_atoi(" --+++++-154862445e56444"));
	printf("Should print 123456546: %d \n", ft_atoi("      123456546ab8567"));
}

void	test_bzero()
{
	char msg[] = "Hello";
	char *p = msg;

	printf("%02X ", *(unsigned char *)p);
	printf("%02X ", *((unsigned char *)p + 1));
	printf("%02X ", *((unsigned char *)p + 2));
	printf("%02X ", *((unsigned char *)p + 3));
	printf("%02X\n", *((unsigned char *)p + 4));
	ft_bzero(msg + 2, 2);
	printf("%02X ", *(unsigned char *)p);
	printf("%02X ", *((unsigned char *)p + 1));
	printf("%02X ", *((unsigned char *)p + 2));
	printf("%02X ", *((unsigned char *)p + 3));
	printf("%02X\n", *((unsigned char *)p + 4));
}

void	test_calloc(void)
{
	printf("-------------------------\n\n");
	printf("Testing calloc\n");

	unsigned char *p;

	p = ft_calloc(4, 1);
	printf("Calloc p is %02X ", *p);
	printf("%02X ", *(p + 1));
	printf("%02X ", *(p + 2));
	printf("%02X\n", *(p + 3));
}

int	main(void)
{
	test_bzero();
	test_memcpy();
	test_memset();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	return(0);
}