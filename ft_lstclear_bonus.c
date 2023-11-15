#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*this;
	t_list	*next;

	this = *lst;
	while (this)
	{
		next = this->next;
		ft_lstdelone(this, del);
		this = next;
	}
	*lst = 0;
}