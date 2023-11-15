#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return (0);
	if (!*lst)
	{
		*lst = new;
		return (0);
	}
	last_node = ft_lstlast(*lst);
	new->next = last_node->next;
	last_node->next = new;
}