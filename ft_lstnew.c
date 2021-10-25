#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);	
}
/*
int	main(void)
{
	t_list *newlist;
	int	c;

	c = 145;
	newlist = ft_lstnew(&c);
	if (newlist)
		ft_putnbr_fd(*((int *)(newlist->content)), 1);
	return (0);
}*/