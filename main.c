/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:40:33 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/16 17:26:34 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Tests for libft */

#include "libft.h"

void	test_isalpha(void)
{
	printf("-------------------------\n");
	printf("Testing isalpha\n");
	printf("-------------------------\n");
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
	memcpy(c + 2, d, 5);
	ft_memcpy(a + 2, b, 5);
	memcpy(c + 2, d, 5);
	ft_memcpy(a + 2, b, 5);
	printf("lib resut: %s\n", c);
	printf("memcpy resut: %s\n", a);
	//printf("memcpy resut: %s\n", ft_memcpy(((void *)0), "segfaulter tu dois", 17));
	//printf("memcpy resut: %s\n", ft_memcpy("segfaulter tu dois", ((void *)0), 17));
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
	
	int	i = 0;
	char c[28] = "lorem ipsum dolor sit amet";
	char d[] = "con\0sec\0\0te\0tur";
	ft_memmove(c, d, 15);
	while (i < 10)
	{
		write(1, &c[i], 1);
		i++;
		printf("| i is %i ", i);
	}
	printf("\nmemmove result is %s\n", c);
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
	printf("-------------------------\n");
	printf("Testing strlcat\n");
	printf("-------------------------\n");
	char a[20] = "12345678";
	char b[] = "hello";
	char c[20] = "12345678"; 
	char d[] = "hello";
	char e[10] = "a";
	int size = ft_strlcat(a, b, 12);
	int size1 = strlcat(c, d, 12);
	printf("result from strlcat is %s - %s - %d\n", a, b, size);
	printf("lib function gives %s - %s - %d\n", c, d, size1);

	printf("test1: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 0));
	printf("test2: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 1));
	printf("test3: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 2));
	printf("test4: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 3));
	printf("test5: %zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 4));
	printf("test6: %zu \n", ft_strlcat(e, "feh je fsehfsk fh", 6));
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
	char c[20] = "abcde";
	printf("4 result is (not in string, should return null) %s\n", ft_strchr(c, 'D'));
	printf("lib result is (not in string, should return null) %s\n", strchr(c, 'D'));
	printf("5 result for null is %p\n", ft_strchr(c, 0));
	printf("lib result is %p\n", strchr(c, 0));
	printf("testing fsoares %p\n", ft_strchr("teste", '\0'));
	printf("lib result for fsoares %p\n", strchr("teste", '\0'));
	printf("strlen %zu libfunc gives %zu\n", ft_strlen("123"), strlen("123"));
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
	char haystack[30] = "aaabcabcd";
	
	printf("-------------------------\n");
	printf("Testing strnstr\n");
	printf("-------------------------\n");
	printf("1 Comparison results %s\n", ft_strnstr("Pineapple ", "apple", 20));
	printf("2 Comparison results %s\n", ft_strnstr("AbraKadabra", "Kadabra", 20));
	printf("3 Comparison results %s\n", ft_strnstr("A vry long sentence to look in ", "vry", 20));
	printf("4 Comparison results %s\n", ft_strnstr("onetwothrefourfivesixseveneight", "six", 32));
	printf("5 Comparison results %s\n", ft_strnstr("Pineapple ", "apple", 4));
	printf("6 Comparison results %s\n", ft_strnstr("AbraKadabra", "Kadabra", 4));
	printf("7 Comparison results %s\n", ft_strnstr("_   _   _", "", 7));
	printf("8 Comparison results %s\n", ft_strnstr("", "", 2));
	printf("9 Comparison results %s\n", ft_strnstr("^*^", "", 0));
	printf("10 Comparison results %s\n", ft_strnstr("pineapple", "orange", 10));
	printf("11 Comparison results %s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("12 Comparison results _%s_\n", ft_strnstr(haystack, "abcd", 9));
	printf("comparison _%s_\n", haystack + 5);
	
}

void	test_atoi(void)
{
	size_t	testsize = -1;
	printf("-------------------------\n\n");
	printf("Testing atoi\n");
	printf("Should print: 123456: %d \n", ft_atoi("+123456ab567"));
	printf("Should print 1267: %d \n", ft_atoi("+1267"));
	printf("Should print -567: %d \n", ft_atoi("+567"));
	printf("Should print -154862445: %d \n", ft_atoi("-154862445e56444"));
	printf("Should print 123456546: %d \n", ft_atoi("      123456546ab8567"));
	printf("Should print with too big: %d \n", ft_atoi("2544500004454455684158455844"));
	printf("Should print with too big library func: %d \n", atoi("2544500004454455684158455844"));
	printf("should not work: %d \n", ft_atoi("fsg54354drg"));
	printf("should not work: %d \n", atoi("fsg54354drg"));
	printf("Should print with too big: %d \n", ft_atoi("21474836490"));
	printf("Should print with too big library func: %d \n", atoi("21474836490"));
	printf("Should print with too big: %d \n", ft_atoi("-2147483649"));
	printf("Should print with too big library func: %d \n", atoi("-2147483649"));
	printf("max size of size t %zu\n", testsize);
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
	unsigned char *v;
	
	p = ft_calloc(4, 1);
	v = ft_calloc(10, 8);
	printf("Calloc p is %02X ", *p);
	printf("%02X ", *(p + 1));
	printf("%02X ", *(p + 2));
	printf("%02X\n", *(p + 3));
	int i = 0;
	while (i <= 85)
	{
		printf("%02X ", *(v + i));
		i++;
	}
	printf("\nend of calloc test\n");
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
	char msg1[] = "Hellooyoooo23574ooomoo36o";
	printf("memchr returns %s\n", ft_memchr(msg, 'o', 7));
	printf("memchr returns %s\n", ft_memchr(msg, 'p', 2));
	printf("memchr returns %s\n", ft_memchr(msg, 'w', 2));
	printf("memchr returns %s\n", ft_memchr(msg1, 'U', 0));
	printf("memchr returns %s\n", ft_memchr(msg1, '0', 0));
	printf("memchr returns %s\n", ft_memchr(msg1, 'm', 185));
	printf("memchr returns %s\n", ft_memchr(msg1, '\0', 185));
}

void	test_substr(void)
{
	printf("-------------------------\n");
	printf("Testing substr\n");
	printf("-------------------------\n");
	char s1[] = "pineapple";
	char s2[] = "";
	
	printf("Next test on pineapple -> 2 2\n");
	printf("substr returns _%s_\n", ft_substr(s1, 2, 2));
	
	printf("Next test on pineapple -> 3 5\n");
	printf("substr returns _%s_\n", ft_substr(s1, 3, 5));
	
	printf("Next test on pineapple -> 100 5\n");
	printf("substr returns _%s_\n", ft_substr(s1, 100, 5));
	
	printf("Next test on pineapple -> 2 700\n");
	printf("substr returns _%s_\n", ft_substr(s1, 2, 700));
	
	printf("Next test on pineapple -> 400 20\n");
	printf("substr returns _%s_\n", ft_substr(s1, 400, 20));

	printf("Next test on pineapple -> 400 20\n");
	printf("substr returns _%s_\n", ft_substr("hola", 0, 73709551615));
	
	printf("Next test on empty string -> 0 0\n");
	printf("substr returns _%s_\n", ft_substr(s2, 0, 0));
	
	printf("Next test on empty string -> 400 20\n");
	printf("substr returns _%s_\n", ft_substr(s2, 400, 20));
	
	printf("Next test on empty string -> 2 1\n");
	printf("substr returns _%s_\n", ft_substr(s2, 2, 1));
	
	printf("Next test on empty string -> 1 2\n");
	printf("substr returns _%s_\n", ft_substr(s2, 1, 2));
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
	char sa[] = "fjewiofsgjioegj";
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
	char s1[] = "---ABC---DEF---PINE-APPLE---gd-hrh-hh-seg-d2r";
	printf("\nTest 1\n");
	printf("%s\n", s1);
	char **ptr1 = ft_split(s1, '-');
	while (*ptr1)
	{
		printf("string is %s\n", *ptr1++);
	}
	
	printf("\nTest 2\n");
	i = 0;
	char **ptr2 = ft_split("       ", ' ');
	while (ptr2[i])
	{
		printf("no %d string is _%s_\n", i, ptr2[i]);
		i++;
	}
	printf("\nTest 3\n");
	i = 0;
	char **ptr3 = ft_split("lorem fefewf dolor sit amet", ' ');
	while (ptr3[i])
	{
		printf("no %d string is %s\n", i, ptr3[i]);
		i++;
	}
}

void	test_itoa()
{
	printf("-------------------------\n");
	printf("Testing itoa\n");
	printf("-------------------------\n");
	printf("Testing 0 --> %s\n", ft_itoa(0));
	printf("Testing 344 --> %s\n", ft_itoa(344));
	printf("Testing -524 --> %s\n", ft_itoa(-524));
	printf("Testing -5548245 --> %s\n", ft_itoa(-5548245));
	printf("Testing 2147483647 --> %s\n", ft_itoa(2147483647));
	printf("Testing -2147483648 --> %s\n", ft_itoa(-2147483648));
}

char	testfunction(unsigned int i, char c)
{	
	if (!(i % 2 == 0))
		c = '!';
	else 
		c = 'U';
	return(c);
}

void	test_strmapi()
{
	printf("-------------------------\n");
	printf("Testing strmapi\n");
	printf("-------------------------\n");
	printf("Testing --> %s\n", ft_strmapi("Hello", testfunction));
	printf("Testing --> %s\n", ft_strmapi("???????????????", testfunction));
}

void	testfunction_2(unsigned int i, char *s)
{	
	if (i % 2 == 0)
		*s = '!';
	else
		*s = 'U';
}

void	test_striteri()
{
	char s1[] = "   ";
	char s2[] = "???????????????";
	printf("-------------------------\n");
	printf("Testing striteri\n");
	printf("-------------------------\n");
	ft_striteri(s1, testfunction_2);
	ft_striteri(s2, testfunction_2);
	printf("Testing --> %s\n", s1);
	printf("Testing --> %s\n", s2);
}

void	test_ft_putchar_fd()
{
	printf("-------------------------\n");
	printf("testing putchar\n");
	printf("-------------------------\n");
	ft_putchar_fd('H', 1);
	ft_putchar_fd('E', 1);
	ft_putchar_fd('I', 1);
	ft_putchar_fd('!', 1);
	ft_putchar_fd('\n', 1);
}

void	test_ft_putstr_fd()
{
	printf("-------------------------\n");
	printf("testing putstr\n");
	printf("-------------------------\n");	
	ft_putstr_fd("Hello\n", 1);
	ft_putstr_fd("????????\n", 1);
}

void	test_ft_putendl_fd()
{
	printf("-------------------------\n");
	printf("testing putendl\n");
	printf("-------------------------\n");	
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("????????", 1);
}

void	test_ft_putnbr_fd()
{
	printf("-------------------------\n");
	printf("testing putnbr\n");
	printf("-------------------------\n");	
	printf("testing 0 ----> \n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	printf("testing 500 ----> \n");
	ft_putnbr_fd(500, 1);
	printf("\n");
	printf("testing -578541 ----> \n");
	ft_putnbr_fd(-578541, 1);
	printf("\n");
	printf("testing 54888655 ----> \n");
	ft_putnbr_fd(54888655, 1);
	printf("\n");
	printf("testing 2147483647 ----> \n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	printf("testing -2147483648 ----> \n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");	
}

void f_del_node(t_list *node)
{
	node->content = 0;
	return;
}

void	test_prntlst(t_list *head)
{	
	t_list *ptr = head;
	printf("\n[");
	while(!ptr)
	{
		printf(" %s ", ptr->content);
		ptr = ptr->next;
	}
	printf("\n]");
	printf(" end of list.\n");
}

void	test_lists()
{
	t_list	**test_list = malloc((sizeof(t_list) * 15) + 1);
	t_list	*head = ft_lstnew("Bananas");
	t_list	*last = 0;
	
	*test_list = head;
	t_list	*new_node = ft_lstnew("Oranges");
	t_list	*new_node1 = ft_lstnew("Pineapples");
	t_list	*new_node2 = ft_lstnew("Apples");
	t_list	*new_node3 = ft_lstnew("Limes");

	t_list	*insert_at_front = ft_lstnew("Kiwis");
	t_list	*insert_at_end = ft_lstnew("Watermelons");
	
	head->next = new_node;
	new_node1->next = new_node2;
	new_node2->next = new_node3;
	new_node3->next = last;
	
	printf("added stuff to the list, printing...\n");
	test_prntlst(head);
	printf("added kiwis to the front, printing list...\n");
	ft_lstadd_front(test_list, insert_at_front);
	test_prntlst(head);
	printf("added watermelons to the end, printing list...\n");
	ft_lstadd_back(test_list, insert_at_end);

	printf("lst size is now %i\n", ft_lstsize(head));
	
	printf("content of last node is %s\n", ft_lstlast(head)->content);
	printf("printing entire list...\n");
	printf("deleting node number 2...\n");
	//ft_lstdelone(*(*test_list + 2), f_del_node);
	free(test_list);
}


int	main(void)
{
 	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_bzero();
	test_memcpy();
	test_memset();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strrchr();
	test_memcmp();
	test_strncmp();
	test_strnstr();
	test_memchr();
	test_strdup();
	test_calloc();
	test_memmove();
	test_strchr();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putnbr_fd();
	test_atoi();
	test_lists();
	return(0);
}