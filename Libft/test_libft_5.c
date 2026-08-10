#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static int	check(char *got, const char *expected)
{
	int	res;

	res = (got != NULL && strcmp(got, expected) == 0);
	free(got);
	return (res);
}

int	main(void)
{
	char	**arr;
	int		ok;

	ok = 1;
	ok = ok && check(ft_substr("Hello World", 6, 5), "World");
	ok = ok && check(ft_strjoin("Hello ", "World"), "Hello World");
	ok = ok && check(ft_strtrim("  hello  ", " "), "hello");
	ok = ok && check(ft_itoa(-42), "-42");
	ok = ok && check(ft_strmapi("hello", to_upper), "HELLO");

	arr = ft_split("Hello World Foo", ' ');
	if (!arr || strcmp(arr[0], "Hello") || strcmp(arr[1], "World")
		|| strcmp(arr[2], "Foo") || arr[3] != NULL)
		ok = 0;
	if (arr)
	{
		while (*arr)
			free(*arr++);
	}

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}