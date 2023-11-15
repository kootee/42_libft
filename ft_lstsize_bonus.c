/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:53:10 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:12 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_listsize(t_list *lst)
{
    int i;

    i = 0;
    while (!lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}