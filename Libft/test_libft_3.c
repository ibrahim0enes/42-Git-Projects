#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	check_str(char *got, const char *expected)
{
	return (got != NULL && strcmp(got, expected) == 0);
}

int	main(void)
{
	int	ok;

	ok = 1;
	ok = ok && (ft_toupper('a') == 'A') && (ft_toupper('z') == 'Z');
	ok = ok && (ft_toupper('A') == 'A') && (ft_toupper('5') == '5');

	ok = ok && (ft_tolower('A') == 'a') && (ft_tolower('Z') == 'z');
	ok = ok && (ft_tolower('a') == 'a') && (ft_tolower('5') == '5');

	ok = ok && check_str(ft_strchr("hello world", 'o'), "o world");
	ok = ok && (ft_strchr("hello world", 'z') == NULL);
	ok = ok && check_str(ft_strchr("hello", '\0'), "");

	ok = ok && check_str(ft_strrchr("hello world", 'o'), "orld");
	ok = ok && check_str(ft_strrchr("hello world", 'l'), "ld");
	ok = ok && (ft_strrchr("hello world", 'z') == NULL);
	ok = ok && check_str(ft_strrchr("hello", '\0'), "");

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}