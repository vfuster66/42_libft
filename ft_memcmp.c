/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:19:52 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/07 10:13:43 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*sone;
	unsigned char		*stwo;

	if (s1 == s2 || n == 0)
		return (0);
	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	while (n--)
	{
		if (*sone != *stwo)
			return (*sone - *stwo);
		if (n)
		{
			sone++;
			stwo++;
		}
	}
	return (0);
}
