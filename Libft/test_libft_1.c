#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf[10];
	int	ok;

	ok = 1;
	if (ft_isalpha('A') != 1 || ft_isalpha('5') != 0)
		ok = 0;
	if (ft_isdigit('7') != 1 || ft_isdigit('a') != 0)
		ok = 0;
	if (ft_isalnum('A') != 1 || ft_isalnum('!') != 0)
		ok = 0;
	if (ft_isascii(0) != 1 || ft_isascii(128) != 0)
		ok = 0;
	if (ft_isprint('\n') != 0 || ft_isprint('~') != 1)
		ok = 0;
	if (ft_strlen("libft") != 5)
		ok = 0;
	ft_memset(buf, 'X', 5);
	if (buf[0] != 'X' || buf[4] != 'X')
		ok = 0;
	if (ok)
	{
		printf("All tests passed\n");
		return (0);
	}
	printf("Some tests failed\n");
	return (1);
}
