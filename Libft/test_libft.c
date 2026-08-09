#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

static int	g_pass;
static int	g_fail;
static int	g_section_pass;
static int	g_section_fail;

#define GREEN "\033[32m"
#define RED   "\033[31m"
#define CYAN  "\033[36m"
#define RESET "\033[0m"

static void	check(int cond, const char *name)
{
	if (cond)
	{
		printf("  [" GREEN "OK" RESET "]   %s\n", name);
		g_pass++;
		g_section_pass++;
	}
	else
	{
		printf("  [" RED "FAIL" RESET "] %s\n", name);
		g_fail++;
		g_section_fail++;
	}
}

static void	section(const char *title)
{
	if (g_section_pass + g_section_fail > 0)
		printf(CYAN "  -> bolum sonucu: %d/%d\n" RESET,
			g_section_pass, g_section_pass + g_section_fail);
	g_section_pass = 0;
	g_section_fail = 0;
	printf("\n" CYAN "===== %s =====\n" RESET, title);
}

static char	map_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	iter_star_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '*';
}

static void	lst_print_int(void *content)
{
	printf("%d ", *(int *)content);
}

static void	*lst_double_int(void *content)
{
	int	*new_val;

	new_val = malloc(sizeof(int));
	if (!new_val)
		return (NULL);
	*new_val = (*(int *)content) * 2;
	return (new_val);
}

static void	lst_del_int(void *content)
{
	free(content);
}

static void	test_char_functions(void)
{
	section("PART 1 - Karakter Fonksiyonlari (is*/to*)");
	check(ft_isalpha('a') == 1 && ft_isalpha('Z') == 1
		&& ft_isalpha('5') == 0 && ft_isalpha(' ') == 0, "ft_isalpha");
	check(ft_isdigit('0') == 1 && ft_isdigit('9') == 1
		&& ft_isdigit('a') == 0, "ft_isdigit");
	check(ft_isalnum('a') == 1 && ft_isalnum('5') == 1
		&& ft_isalnum('!') == 0, "ft_isalnum");
	check(ft_isascii(0) == 1 && ft_isascii(127) == 1
		&& ft_isascii(128) == 0 && ft_isascii(-1) == 0, "ft_isascii");
	check(ft_isprint('a') == 1 && ft_isprint(' ') == 1
		&& ft_isprint('\n') == 0, "ft_isprint");
	check(ft_toupper('a') == 'A' && ft_toupper('Z') == 'Z'
		&& ft_toupper('5') == '5', "ft_toupper");
	check(ft_tolower('A') == 'a' && ft_tolower('z') == 'z'
		&& ft_tolower('5') == '5', "ft_tolower");
}

static void	test_memory_functions(void)
{
	char	a[20];
	char	b[20];
	char	ref[20];
	char	overlap[20];

	section("PART 1 - Bellek Fonksiyonlari");
	memset(ref, 'X', 10);
	ft_memset(a, 'X', 10);
	check(memcmp(a, ref, 10) == 0, "ft_memset");
	memset(a, 'A', 10);
	ft_bzero(a, 10);
	check(a[0] == 0 && a[9] == 0, "ft_bzero");
	strcpy((char *)ref, "abcdefghi");
	memcpy(b, ref, 10);
	ft_memcpy(a, ref, 10);
	check(memcmp(a, b, 10) == 0, "ft_memcpy (ust uste binmeyen)");
	strcpy(overlap, "0123456789ABCDEF");
	memmove(overlap, overlap + 2, 10);
	strcpy((char *)ref, "0123456789ABCDEF");
	ft_memmove(ref, ref + 2, 10);
	check(memcmp(overlap, ref, 17) == 0, "ft_memmove (ust uste binen)");
	strcpy(a, "hello world");
	check(ft_memchr(a, 'w', 11) == memchr(a, 'w', 11), "ft_memchr (bulundu)");
	check(ft_memchr(a, 'z', 11) == NULL, "ft_memchr (bulunamadi -> NULL)");
	check(ft_memcmp("abc", "abd", 3) < 0
		&& ft_memcmp("abc", "abc", 3) == 0
		&& ft_memcmp("abd", "abc", 3) > 0, "ft_memcmp");
}

static void	test_string_functions(void)
{
	char	dst[20];
	size_t	ret;

	section("PART 1 - String Fonksiyonlari");
	check(ft_strlen("") == 0 && ft_strlen("merhaba") == 7, "ft_strlen");
	memset(dst, 'Z', sizeof(dst));
	ret = ft_strlcpy(dst, "Hello", sizeof(dst));
	check(ret == 5 && strcmp(dst, "Hello") == 0, "ft_strlcpy (yeterli alan)");
	memset(dst, 'Z', sizeof(dst));
	ret = ft_strlcpy(dst, "Hello, World!", 5);
	check(ret == 13 && strcmp(dst, "Hell") == 0,
		"ft_strlcpy (kirpma + tam uzunlugu dondurme)");
	strcpy(dst, "Hi ");
	ret = ft_strlcat(dst, "there", sizeof(dst));
	check(ret == 8 && strcmp(dst, "Hi there") == 0, "ft_strlcat (yeterli alan)");
	strcpy(dst, "1234567");
	ret = ft_strlcat(dst, "abcdef", 10);
	check(ret == 13 && strncmp(dst, "1234567ab", 9) == 0 && dst[9] == '\0',
		"ft_strlcat (kirpma + truncation tespiti)");
	check(ft_strchr("hello", 'l') == strchr("hello", 'l'),
		"ft_strchr (bulundu)");
	check(ft_strchr("hello", 'z') == NULL, "ft_strchr (bulunamadi)");
	check(*ft_strchr("hello", '\0') == '\0', "ft_strchr (c = '\\0')");
	check(ft_strrchr("hello", 'l') - "hello" == 3, "ft_strrchr (son gorulen)");
	check(ft_strrchr("hello", 'z') == NULL, "ft_strrchr (bulunamadi)");
	check(ft_strncmp("abc", "abd", 3) < 0
		&& ft_strncmp("abc", "abc", 5) == 0
		&& ft_strncmp("abc", "ab", 5) > 0, "ft_strncmp");
	check(ft_strnstr("hello world", "world", 11) - "hello world" == 6,
		"ft_strnstr (bulundu)");
	check(ft_strnstr("hello world", "world", 7) == NULL,
		"ft_strnstr (len siniri disinda)");
	check(ft_strnstr("hello", "", 5) != NULL,
		"ft_strnstr (bos little)");
}

static void	test_convert_alloc_functions(void)
{
	void	*p;
	char	*s;
	int		all_zero;
	int		i;

	section("PART 1 - Donusum ve Allocation Fonksiyonlari");
	check(ft_atoi("42") == 42 && ft_atoi("-42") == -42
		&& ft_atoi("   +42") == 42 && ft_atoi("abc") == 0,
		"ft_atoi (temel durumlar)");
	check(ft_atoi("2147483647") == 2147483647, "ft_atoi (INT_MAX)");
	check(ft_atoi("-2147483648") == -2147483648, "ft_atoi (INT_MIN)");
	p = ft_calloc(5, sizeof(int));
	check(p != NULL, "ft_calloc (allocation basarili)");
	if (p)
	{
		all_zero = 1;
		i = 0;
		while (i < 5)
		{
			if (((int *)p)[i] != 0)
				all_zero = 0;
			i++;
		}
		check(all_zero, "ft_calloc (bellek sifirlanmis)");
		free(p);
	}
	s = ft_strdup("libft");
	check(s != NULL && strcmp(s, "libft") == 0, "ft_strdup");
	free(s);
}

static void	test_extra_string_functions(void)
{
	char	*s;
	char	**arr;
	int		i;

	section("PART 2 - Ekstra String Fonksiyonlari");
	s = ft_substr("Hello World", 6, 5);
	check(s != NULL && strcmp(s, "World") == 0, "ft_substr (normal durum)");
	free(s);
	s = ft_substr("Hello", 10, 5);
	check(s != NULL && strcmp(s, "") == 0, "ft_substr (start >= strlen)");
	free(s);
	s = ft_substr("Hello", 1, 100);
	check(s != NULL && strcmp(s, "ello") == 0, "ft_substr (len tasarsa)");
	free(s);
	s = ft_strjoin("foo", "bar");
	check(s != NULL && strcmp(s, "foobar") == 0, "ft_strjoin (normal durum)");
	free(s);
	s = ft_strjoin("", "bar");
	check(s != NULL && strcmp(s, "bar") == 0, "ft_strjoin (bos s1)");
	free(s);
	s = ft_strtrim("   Hello World   ", " ");
	check(s != NULL && strcmp(s, "Hello World") == 0, "ft_strtrim (bosluk)");
	free(s);
	s = ft_strtrim("xxHelloxx", "x");
	check(s != NULL && strcmp(s, "Hello") == 0, "ft_strtrim (ozel karakter)");
	free(s);
	s = ft_strtrim("xxxx", "x");
	check(s != NULL && strcmp(s, "") == 0, "ft_strtrim (hepsi kirpilir)");
	free(s);
	arr = ft_split("Bu bir test cumlesi", ' ');
	check(arr != NULL && arr[0] && arr[1] && arr[2] && arr[3] && !arr[4]
		&& strcmp(arr[0], "Bu") == 0 && strcmp(arr[3], "cumlesi") == 0,
		"ft_split (normal cumle)");
	if (arr)
	{
		i = 0;
		while (arr[i])
			free(arr[i++]);
		free(arr);
	}
	arr = ft_split("   ", ' ');
	check(arr != NULL && arr[0] == NULL, "ft_split (sadece ayirici)");
	if (arr)
		free(arr);
	s = ft_itoa(42);
	check(s != NULL && strcmp(s, "42") == 0, "ft_itoa (pozitif)");
	free(s);
	s = ft_itoa(-42);
	check(s != NULL && strcmp(s, "-42") == 0, "ft_itoa (negatif)");
	free(s);
	s = ft_itoa(0);
	check(s != NULL && strcmp(s, "0") == 0, "ft_itoa (sifir)");
	free(s);
	s = ft_itoa(-2147483648);
	check(s != NULL && strcmp(s, "-2147483648") == 0, "ft_itoa (INT_MIN)");
	free(s);
	s = ft_strmapi("hello", map_upper);
	check(s != NULL && strcmp(s, "HELLO") == 0, "ft_strmapi");
	free(s);
}

static void	test_striteri(void)
{
	char	buf[6];

	section("PART 2 - ft_striteri");
	strcpy(buf, "hello");
	ft_striteri(buf, iter_star_even);
	check(strcmp(buf, "*e*l*") == 0, "ft_striteri");
}

static void	test_fd_functions(void)
{
	section("PART 2 - File Descriptor Fonksiyonlari (gorsel dogrulama)");
	printf("  Beklenen : A\n");
	printf("  Gercek   : ");
	ft_putchar_fd('A', 1);
	printf("\n");
	printf("  Beklenen : merhaba\n");
	printf("  Gercek   : ");
	ft_putstr_fd("merhaba", 1);
	printf("\n");
	printf("  Beklenen : merhaba (yeni satirla biter)\n");
	printf("  Gercek   : ");
	ft_putendl_fd("merhaba", 1);
	printf("  Beklenen : -12345\n");
	printf("  Gercek   : ");
	ft_putnbr_fd(-12345, 1);
	printf("\n");
	printf("  Beklenen : 0\n");
	printf("  Gercek   : ");
	ft_putnbr_fd(0, 1);
	printf("\n");
}

static void	test_bonus_list_functions(void)
{
	t_list	*lst;
	t_list	*node;
	int		v1;
	int		v2;
	int		v3;
	t_list	*mapped;
	t_list	*last;
	t_list	*next;

	section("BONUS - Zincirli Liste (t_list) Fonksiyonlari");
	v1 = 1;
	node = ft_lstnew(&v1);
	check(node != NULL && node->content == &v1 && node->next == NULL,
		"ft_lstnew");
	lst = NULL;
	ft_lstadd_front(&lst, node);
	check(lst == node, "ft_lstadd_front (bos listeye ekleme)");
	v2 = 2;
	ft_lstadd_front(&lst, ft_lstnew(&v2));
	check(lst->content == &v2 && lst->next == node,
		"ft_lstadd_front (dolu listenin basina ekleme)");
	check(ft_lstsize(lst) == 2, "ft_lstsize");
	check(ft_lstsize(NULL) == 0, "ft_lstsize (bos liste -> 0)");
	check(ft_lstlast(lst) == node, "ft_lstlast");
	v3 = 3;
	ft_lstadd_back(&lst, ft_lstnew(&v3));
	last = ft_lstlast(lst);
	check(last != NULL && last->content == &v3, "ft_lstadd_back");
	check(ft_lstsize(lst) == 3, "ft_lstsize (back eklemeden sonra)");
	printf("  Liste icerigi: ");
	ft_lstiter(lst, lst_print_int);
	printf("(beklenen: 2 1 3 )\n");
	mapped = ft_lstmap(lst, lst_double_int, lst_del_int);
	check(mapped != NULL && mapped->content && *(int *)mapped->content == 4
		&& mapped->next != NULL && mapped->next->content
		&& *(int *)mapped->next->content == 2
		&& mapped->next->next != NULL && mapped->next->next->content
		&& *(int *)mapped->next->next->content == 6,
		"ft_lstmap (her elemani 2 ile carpma)");
	ft_lstclear(&mapped, lst_del_int);
	check(mapped == NULL, "ft_lstclear (pointer NULL'lanmali)");
	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	check(lst == NULL, "manuel temizlik sonrasi liste NULL");
}

int	main(void)
{
	printf(CYAN "############################################\n");
	printf("#   LIBFT TEST SUITE - kategorize edilmis   #\n");
	printf("############################################\n" RESET);
	test_char_functions();
	test_memory_functions();
	test_string_functions();
	test_convert_alloc_functions();
	test_extra_string_functions();
	test_striteri();
	test_fd_functions();
	test_bonus_list_functions();
	if (g_section_pass + g_section_fail > 0)
		printf(CYAN "  -> bolum sonucu: %d/%d\n" RESET,
			g_section_pass, g_section_pass + g_section_fail);
	printf("\n" CYAN "============================================\n");
	printf("TOPLAM: %d/%d test basarili" RESET "\n", g_pass, g_pass + g_fail);
	if (g_fail == 0)
		printf(GREEN "Tebrikler, tum testler gecti!\n" RESET);
	else
		printf(RED "%d test basarisiz.\n" RESET, g_fail);
	return (g_fail != 0);
}
