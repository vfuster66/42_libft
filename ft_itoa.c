/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:18:21 by vfuster-          #+#    #+#             */
/*   Updated: 2023/01/30 17:15:04 by virginie         ###   ########.fr       */
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
	char	*string;
	unsigned int		number;
	unsigned int		len;

	number = 0;
	len = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (len + 1 ));
	if (string == NULL)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = - n;
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
