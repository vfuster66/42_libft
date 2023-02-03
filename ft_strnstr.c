/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:41:19 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/03 10:31:14 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_len;
	size_t	little_len;
	size_t	size;

	if (*little == '\0')
		return ((char *)big);
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (big_len < little_len)
		return (0);
	if (big_len > len)
	{
		size = len;
	}
	else
	{
		size = big_len;
	}
	while (size-- >= little_len)
	{
		if (ft_memcmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
