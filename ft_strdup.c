/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:55:48 by uaksel            #+#    #+#             */
/*   Updated: 2023/12/15 14:56:02 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;
  size_t i;
  i = 0;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
  
  	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = 0;
  return (ret);
}