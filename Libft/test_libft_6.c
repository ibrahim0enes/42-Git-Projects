#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

static void	to_upper_iter(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static int	check_fd(int fd, const char *expected)
{
	char	buf[256];
	ssize_t	n;

	close(fd);
	fd = open("tmp_ft_test.txt", O_RDONLY);
	n = read(fd, buf, sizeof(buf) - 1);
	close(fd);
	if (n < 0)
		n = 0;
	buf[n] = '\0';
	return (strcmp(buf, expected) == 0);
}

int	main(void)
{
	char	str[] = "hello";
	int		ok;
	int		fd;

	ok = 1;
	ft_striteri(str, to_upper_iter);
	ok = ok && (strcmp(str, "HELLO") == 0);

	fd = open("tmp_ft_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putchar_fd('A', fd);
	ok = ok && check_fd(fd, "A");

	fd = open("tmp_ft_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putstr_fd("hello", fd);
	ok = ok && check_fd(fd, "hello");

	fd = open("tmp_ft_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putendl_fd("hello", fd);
	ok = ok && check_fd(fd, "hello\n");

	fd = open("tmp_ft_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putnbr_fd(-42, fd);
	ok = ok && check_fd(fd, "-42");

	unlink("tmp_ft_test.txt");
	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}