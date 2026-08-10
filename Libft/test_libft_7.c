#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	free_list(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;
	int		ok;

	ok = 1;
	lst = NULL;

	a = ft_lstnew("a");
	ok = ok && a && strcmp(a->content, "a") == 0 && a->next == NULL;
	ft_lstadd_front(&lst, a);

	b = ft_lstnew("b");
	ft_lstadd_front(&lst, b);
	ok = ok && lst == b && strcmp(((t_list *)lst)->content, "b") == 0;
	ok = ok && ft_lstsize(lst) == 2;
	ok = ok && strcmp(ft_lstlast(lst)->content, "a") == 0;

	c = ft_lstnew("c");
	ft_lstadd_back(&lst, c);
	ok = ok && ft_lstsize(lst) == 3;
	ok = ok && ft_lstlast(lst) == c;
	ok = ok && strcmp(ft_lstlast(lst)->content, "c") == 0;

	free_list(lst);

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}