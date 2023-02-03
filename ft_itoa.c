/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:14:28 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/03 08:38:22 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len += 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	len;

	number = 0;
	len = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '\0';
	string[len] = '\0';
	while (n != 0)
	{
		string[len - 1] = (n % 10) + '0';
		n = n / 10;
		len --;
	}
	return (string);
}
