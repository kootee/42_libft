#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (lst == 0 || f == 0)
		return (0);
	res = 0;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (res);
}