/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:41:47 by uaksel            #+#    #+#             */
/*   Updated: 2023/12/26 21:30:35 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*buffer1;
	char			*buffer2;

	i = len;
	buffer1 = (char *)src;
	buffer2 = (char *)dst;
	if (dst == src)
		return (dst);
	else if (buffer2 > buffer1)
	{
		while (i-- > 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (buffer2);
}
