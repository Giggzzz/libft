/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:35:33 by gudias            #+#    #+#             */
/*   Updated: 2021/10/18 10:37:49 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strrchr(const char *str, int c)
{
  int   i;

  i = ft_strlen(str);
  while (i >= 0)
  {
    if (str[i] == c)
      return ((char*)(str + i));
    i--;
  }
  return (NULL);
}
