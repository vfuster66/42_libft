/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:20:34 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:20:36 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_elem;

	if (!del)
		return;
	while (*lst)
	{
		del((*lst)->content);
		old_elem = *lst;
		*lst = old_elem->next;
		free(old_elem);
	}
	*lst = NULL;
}
