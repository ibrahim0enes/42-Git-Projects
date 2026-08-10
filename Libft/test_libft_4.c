#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	check_str(char *got, const char *expected)
{
	return (got != NULL && strcmp(got, expected) == 0);
}

int	main(void)
{
	void	*mem;
	char	*dup;
	int		ok;

	ok = 1;
	ok = ok && (ft_strncmp("hello", "hello", 5) == 0);
	ok = ok && (ft_strncmp("abc", "abd", 3) != 0);
	ok = ok && (ft_strncmp("abc", "xyz", 0) == 0);

	mem = ft_memchr("hello world", 'w', 11);
	ok = ok && check_str((char *)mem, "world");
	ok = ok && (ft_memchr("hello world", 'z', 11) == NULL);

	ok = ok && (ft_memcmp("abc", "abc", 3) == 0);
	ok = ok && (ft_memcmp("abc", "abd", 3) != 0);

	ok = ok && check_str(ft_strnstr("hello world", "world", 11), "world");
	ok = ok && (ft_strnstr("hello world", "world", 8) == NULL);

	ok = ok && (ft_atoi("42") == 42);
	ok = ok && (ft_atoi("   -42") == -42);
	ok = ok && (ft_atoi("+123abc") == 123);

	mem = ft_calloc(5, sizeof(char));
	ok = ok && mem != NULL && ((char *)mem)[0] == 0 && ((char *)mem)[4] == 0;
	free(mem);

	dup = ft_strdup("libft");
	ok = ok && check_str(dup, "libft");
	free(dup);

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}