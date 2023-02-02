/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:13:28 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/02 17:13:37 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pnt;
	size_t	len;

	len = count * size;
	pnt = malloc(len);
	if (!pnt)
		return (NULL);
	ft_memset(pnt, 0, len);
	return (pnt);
}
