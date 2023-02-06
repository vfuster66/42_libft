/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:57:11 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/06 11:39:01 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief ajoute dst a src 
/// @return longueur de la chaine creee
size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!src || !size)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i < size - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
