/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:27:01 by vfuster-          #+#    #+#             */
/*   Updated: 2022/12/22 11:27:02 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putend_fd(char const *s, int fd)
{
	if (fd < 0)
		return;
	if (!s)
		return;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
