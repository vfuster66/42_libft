/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:27:28 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:27:29 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (fd < 0)
        return;
    char buffer[12];
    int i = 0;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n == 0)
    {
        ft_putchar_fd('0', fd);
        return;
    }
    while (n > 0)
    {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }
    while (i > 0)
        ft_putchar_fd(buffer[--i], fd);
}
