/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:12:27 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/27 13:30:40 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
		{
			return (a + i);
		}
		i++;
	}
	return (0);
}
