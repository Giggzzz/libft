#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		if (*alst)
		{
			while ((*alst)->next)
				*alst = (*alst)->next;
			(*alst)->next = new;
		}
		else
			*alst = new;
	}
}
