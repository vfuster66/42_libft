/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:32:51 by vfuster-          #+#    #+#             */
/*   Updated: 2023/01/31 15:00:19 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
  size_t start;
  size_t end;
  char *result;
  size_t i;
  size_t j;
  
  if (!s)
    return NULL;

  start = 0;
  end = ft_strlen(s) - 1;

  while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
    start++;
  while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
    end--;
  
  result = (char *)malloc((end - start + 2) * sizeof(char));
  if (!result)
    return NULL;

  for (i = start, j = 0; i <= end; i++, j++)
    result[j] = s[i];

  result[j] = '\0';

  return result;
}
