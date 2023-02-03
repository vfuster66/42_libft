/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:13:00 by vfuster-          #+#    #+#             */
/*   Updated: 2023/02/03 10:15:49 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_start(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_get_end(const char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s)
		return (NULL);
	start = ft_get_start(s);
	end = ft_get_end(s);
	if (end == -1 || start == -1)
		return (ft_strnew(0));
	res = ft_substr(s, start, end - start + 1);
	return (res);
}