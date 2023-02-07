/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:22:56 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/07 08:00:42 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*out;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	out = ft_lstnew(NULL);
	if (!out)
		return (NULL);
	elem = out;
	while (lst)
	{
		elem->content = (*f)(lst->content);
		if (lst->next)
		{
			elem->next = ft_lstnew(NULL);
			if (!elem->next)
			{
				ft_lstclear(&out, del);
				return (NULL);
			}
			elem = elem->next;
		}
		lst = lst->next;
	}
	return (out);
}
