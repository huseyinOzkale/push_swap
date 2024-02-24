/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:56:45 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/19 16:03:22 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((a[i] != '\0' || b[i] != '\0') && i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
