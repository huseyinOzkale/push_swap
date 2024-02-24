/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:08:13 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/21 19:07:11 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
