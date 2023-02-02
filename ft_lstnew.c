/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:23:07 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:23:08 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elt;

	elt = (t_list*)malloc(sizeof(*elt));
	if (elt == NULL)
		return (NULL);
	if (content == NULL)
	{
		elt->content = NULL;
		elt->content_size = 0;
	}
	else
	{
		elt->content = malloc(content_size);
		if (elt->content == NULL)
		{
			free(elt);
			return(NULL);
		}
		ft_memcpy(elt->content, content, content_size);
		elt->content_size = content_size;
	}
	elt->next = NULL;
	return(elt);
}
