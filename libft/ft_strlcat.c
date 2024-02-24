/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:21:03 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/20 13:07:54 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	a;

	a = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i >= dstsize)
	{
		return (dstsize + j);
	}
	if (dstsize != 0)
	{
		while (src[a] != '\0' && a < dstsize - i - 1)
		{
			dst[i + a] = src[a];
			a++;
		}
	}
	dst[i + a] = '\0';
	return (i + j);
}
