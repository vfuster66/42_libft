/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:14:28 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/03 15:11:20 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_calc_lenght(int number, int sign)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (sign == -1)
		len = 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

static void	ft_convert_number(char *string, int number, int len, int sign)
{
	int	i;

	i = 0;
	if (sign == -1)
		string[i++] = '-';
	while (i < len)
	{
		string[i++] = number % 10 * sign + '0';
		number /= 10;
	}
	string[i] = '\0';
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	int	len;
	int	sign;

	number = n;
	if (n < 0)
	{
		sign = -1;
		number = -n;
	}
	else
		sign = 1;
	len = ft_calc_lenght(number, sign);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[len] = '\0';
	ft_convert_number(string, number, len, sign);
	return (string);	
}
