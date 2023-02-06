/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:15:39 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/06 12:03:21 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief convertit le debut de la chaine pointee par nptr en entier int
/// @param nptr 
/// @return le resultat de la conversion 
int	ft_atoi(char const *nptr)
{
	int		i;
	long	number;
	long	sign;

	i = 0;
	sign = 1;
	number = 0;
	while (nptr[i] == ' ' || ((9 <= nptr[i]) && (nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + nptr[i] - '0';
		i++;
	}
	return (number * sign);
}
