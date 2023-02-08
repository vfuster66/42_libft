/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:42:31 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/08 10:45:22 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* verifie s'il s'agit d'une majuscule (ft_isupper)
 * convertit en minuscule
 *
 **/
static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
