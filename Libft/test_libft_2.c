#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf1[20];
	char	buf2[20];
	char	dst[10];
	int		ok;

	ok = 1;

	memset(buf1, 'X', sizeof(buf1));
	ft_bzero(buf1, 5);
	ok = ok && (buf1[0] == 0 && buf1[4] == 0 && buf1[5] == 'X');

	memset(buf1, 'A', sizeof(buf1));
	memset(buf2, 0, sizeof(buf2));
	ft_memcpy(buf2, buf1, 10);
	ok = ok && (memcmp(buf1, buf2, 10) == 0);

	strcpy(buf1, "1234567890");
	ft_memmove(buf1 + 2, buf1, 5);
	ok = ok && (memcmp(buf1, "1212345890", 10) == 0);

	ok = ok && (ft_strlcpy(dst, "hello", sizeof(dst)) == 5)
		&& (strcmp(dst, "hello") == 0);
	ok = ok && (ft_strlcpy(dst, "helloworld123", 5) == 13)
		&& (strcmp(dst, "hell") == 0);

	strcpy(dst, "1234567");
	ok = ok && (ft_strlcat(dst, "xyz", 11) == 10)
		&& (strcmp(dst, "1234567xyz") == 0);

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}