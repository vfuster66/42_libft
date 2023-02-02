/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:54:25 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/02 09:54:29 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	src;
	size_t			i;

	i = 0;
	new_dest = s;
	src = c;
	while (i++ < n)
		*new_dest++ = src;
	return (s);
}
