/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:33 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/07 12:06:21 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tests for libft */

#include "libft.h"

void	test_isalpha(void)
{
	printf("-------------------------\n\n");
	printf("Testing isalpha\n");
	printf("Isalpha returns %d\n", ft_isalpha(67));
	printf("Isalpha returns %d\n", ft_isalpha(65));
	printf("Isalpha returns %d\n", ft_isalpha(122));
	printf("Isalpha returns %d\n", ft_isalpha(116));
	printf("Isalpha returns %d\n", ft_isalpha(92));
}

void	test_isdigit(void)
{
	printf("-------------------------\n\n");
	printf("Testing isdigit\n");
	printf("isdigit returns %d | 5\n", ft_isdigit('5'));
	printf("isdigit returns %d | r\n", ft_isdigit('r'));
	printf("isdigit returns %d | h\n", ft_isdigit('h'));
	printf("isdigit returns %d | 8\n", ft_isdigit('8'));
	printf("isdigit returns %d | 0\n", ft_isdigit('0'));
	printf("isdigit returns %d | 9\n", ft_isdigit('9'));
}

void	test_isalnum(void)
{
	printf("-------------------------\n\n");
	printf("Testing isalnum\n");
	printf("isalnum returns %d\n", ft_isalnum(116));
	printf("isalnum returns %d\n", ft_isalnum(54));
	printf("isalnum returns %d\n", ft_isalnum(79));
	printf("isalnum returns %d\n", ft_isalnum(0));
	printf("isalnum returns %d\n", ft_isalnum(4));
}

void	test_memcpy(void)
{
	printf("-------------------------\n\n");
	printf("Testing memcpy\n");
	char a[] = "abcdefgh";
	char b[] = "MARIO";
	char c[] = "abcdefgh";
	char d[] = "LUIGI";
	ft_memcpy(a + 2, b, 5);
	memcpy(c + 2, d, 5);
	printf("memcpy resut: %s\n", a);
	printf("lib resut: %s\n", c);
}

void	test_memset(void)
{
	printf("-------------------------\n\n");
	printf("Testing memset\n");
	char a[] = "Hello";
	char b[] = "Hello";
	ft_memset(a, 'A', 4);
	memset(b, '-', 5);
	printf("memset test resut: %s\n", a);
	printf("memset test resut: %s\n", b);
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
	char c[6] = "iiiii";
	char d[6] = "uuuuu";
	int size = ft_strlcpy(a, b, 3);
	int size1 = strlcpy(c, d, 3);
	printf("strlcpy copied string is %s and return value %d\n", a, size);
	printf("lib function copied str is %s and return value %d\n", c, size1);
}

void	test_strlcat(void)
{
	printf("-------------------------\n\n");
	printf("Testing strlcat\n");
	char a[] = "12345678";
	char b[] = "hello";
	char c[] = "12345678"; //9
	char d[] = "hello";
	int size = ft_strlcat(a, b, 9);
	int size1 = strlcat(c, d, 9);
	printf("result from strlcat is %s %d\n", a, size);
	printf("lib function gives %s %s %d\n", c, d, size1);
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
	char a[] = "pineapple!";
	printf("1 result is %s\n", ft_strchr(a, 'a'));
	printf("2 result is %s\n", ft_strchr(a, 'n'));
	printf("3 result is %s\n", ft_strchr(a, '!'));
	char c[6] = "abcde";
	printf("4 result is (not in string, should return null) %s\n", ft_strchr(c, 'D'));
	printf("lib result is (not in string, should return null) %s\n", strchr(c, 'D'));
	printf("5 result for null is %s\n", ft_strchr(c, 0));
	printf("lib result is %s\n", strchr(c, 0));
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

void test_strdup(void)
{
	printf("-------------------------\n\n");
	printf("Testing strdup\n");
	
	char msg[] = "Helloooooooooooo";
	printf("strdup returns %s\n", ft_strdup(msg));
}

void	test_memchr(void)
{
	printf("-------------------------\n\n");
	printf("Testing memchr\n");
	
	char msg[] = "Helloooooooooooo";
	printf("memchr returns %s\n", ft_memchr(msg, 111, 7));
	printf("memchr returns %s\n", ft_memchr(msg, 111, 2));
}

void	test_substr(void)
{
	printf("-------------------------\n");
	printf("Testing substr\n");
	printf("-------------------------\n");
	char s1[] = "pineapple";
	printf("Next test		\n2 2\n");
	printf("substr returns _%s_\n", ft_substr(s1, 2, 2));
	printf("Next test		\n3 5\n");
	printf("substr returns _%s_\n", ft_substr(s1, 3, 5));
	printf("Next test		\n100 5\n");
	printf("substr returns _%s_\n", ft_substr(s1, 100, 5));
	printf("Next test		\n 2 700\n");
	printf("substr returns _%s_\n", ft_substr(s1, 2, 700));
	printf("Next test		\n 400 20\n");
	printf("substr returns _%s_\n", ft_substr(s1, 400, 20));
}

void	test_strjoin()
{
	printf("-------------------------\n\n");
	printf("Testing strjoin\n");
	
	char s1[] = "pine";
	char s2[] = "apple";
	char sa[] = "hur";
	char sb[] = "raa!";
	printf("strjoin returns %s\n", ft_strjoin(s1, s2));
	printf("strjoin returns %s\n", ft_strjoin(sa, sb));
}

void	test_strtrim()
{
	printf("-------------------------\n");
	printf("Testing strtrim\n");
	
	char s1[] = "213ABC---DE123";
	char s2[] = "123";
	char sa[] = "hur";
	char sb[] = "r";
	char sy[] = "          ";
	printf("Next test\n");
	printf("1 strtrim returns _%s_\n", ft_strtrim(s1, s2));
	printf("Next test\n");
	printf("2 strtrim returns _%s_\n", ft_strtrim(sa, sb));
	printf("Next test\n");
	printf("3 strtrim returns _%s_\n", ft_strtrim("Hello", "H"));
	printf("Next test\n");
	printf("4 strtrim returns _%s_\n", ft_strtrim("superlongwithoutanythingtoremove", "!"));
	printf("Next test\n");
	printf("5 strtrim returns _%s_\n", ft_strtrim("", ""));
	printf("Next test\n");
	printf("6 strtrim returns _%s_\n", ft_strtrim("Hello", ""));
	printf("Next test\n");
	printf("7 strtrim returns _%s_\n", ft_strtrim(sy, " "));
}

void	test_split()
{
	printf("-------------------------\n");
	printf("Testing split\n");
	printf("-------------------------\n");
	int	i = 0;
	char s1[] = "---ABC---DEF---PINE-APPLE---";
	printf("%s\n", s1);
	char **ptr1 = ft_split(s1, '-');
	while (i < 4)
	{
		printf("no %d string is %s\n", i, ptr1[i]);
		i++;
	}
}

int	main(void)
{
/* 	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_bzero();
	test_memcpy();
	test_memset();
	test_memmove();
	test_strlcpy();
	//test_strlcat();
	test_toupper();
	test_tolower(); */
	/* test_strchr();
	test_strrchr();
	test_strncmp();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_memchr();*/
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	return(0);
}