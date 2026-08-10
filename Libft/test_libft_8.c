#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	g_del_count = 0;

static void	del_int(void *content)
{
	free(content);
	g_del_count++;
}

static void	incr_int(void *content)
{
	(*(int *)content)++;
}

static void	*double_int(void *content)
{
	int	*new;

	new = malloc(sizeof(int));
	if (new)
		*new = *(int *)content * 2;
	return (new);
}

static t_list	*build_list(int *vals, int n)
{
	t_list	*lst;
	int		*v;
	int		i;

	lst = NULL;
	i = 0;
	while (i < n)
	{
		v = malloc(sizeof(int));
		*v = vals[i];
		ft_lstadd_back(&lst, ft_lstnew(v));
		i++;
	}
	return (lst);
}

int	main(void)
{
	int		vals[3];
	int		*v;
	t_list	*node;
	t_list	*lst;
	t_list	*mapped;
	t_list	*tmp;
	int		ok;

	ok = 1;
	vals[0] = 1;
	vals[1] = 2;
	vals[2] = 3;

	v = malloc(sizeof(int));
	*v = 5;
	node = ft_lstnew(v);
	ft_lstdelone(node, del_int);
	ok = ok && g_del_count == 1;

	lst = build_list(vals, 3);
	ft_lstiter(lst, incr_int);
	tmp = lst;
	ok = ok && *(int *)tmp->content == 2;
	tmp = tmp->next;
	ok = ok && *(int *)tmp->content == 3;
	tmp = tmp->next;
	ok = ok && *(int *)tmp->content == 4;

	mapped = ft_lstmap(lst, double_int, del_int);
	tmp = mapped;
	ok = ok && tmp && *(int *)tmp->content == 4;
	tmp = tmp->next;
	ok = ok && tmp && *(int *)tmp->content == 6;
	tmp = tmp->next;
	ok = ok && tmp && *(int *)tmp->content == 8;

	g_del_count = 0;
	ft_lstclear(&lst, del_int);
	ok = ok && lst == NULL && g_del_count == 3;
	ft_lstclear(&mapped, del_int);

	if (ok)
		printf("All tests passed\n");
	else
		printf("Some tests failed\n");
	return (!ok);
}