#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*list;

	if (lst)
	{
		list = *lst;
		while (list)
		{	
			next = list->next;
			del(list->content);
			free(list);
			list = next;
		}
		*lst = NULL;
	}
}
