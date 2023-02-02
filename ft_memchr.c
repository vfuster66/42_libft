/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:59:21 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/02 11:36:47 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief examine les 'n' 1ers octets de la zone memoire pointee par s
/// @brief a la recherche du caractere 'c'.
/// @brief Le 1er octet correspondant a 'c' arrete l'operation
/// @return un pointeur sur l'octet correspondant ou NULL
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
