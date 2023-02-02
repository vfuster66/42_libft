/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:22:56 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:22:58 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *head;
    t_list *prev;
    t_list *new_elem;

    head = NULL;
    prev = NULL;
    while (lst)
    {
        if (!(new_elem = f(lst)))
        {
            ft_lstclear(&head);
            return (NULL);
        }
        if (!head)
            head = new_elem;
        if (prev)
            prev->next = new_elem;
        prev = new_elem;
        lst = lst->next;
    }
    return (head);
}
