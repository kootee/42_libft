
#include "libft.h"

t_list *ft_lstlasat(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}