/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:19:43 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:19:47 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if(alst == NULL || new == NULL)
		return ;
	if(*alst == NULL)
		*alst = new;
	else
	{
		tmp = ft_lstlast(*alst);
		tmp->next = new;
		new->next = NULL;
	}
}
