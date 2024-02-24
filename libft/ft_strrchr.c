/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:18 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/20 12:11:03 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*ret;

	ret = (char *)s;
	a = ft_strlen(ret);
	while (a >= 0)
	{
		if (ret[a] == (char)c)
			return (ret + a);
		a--;
	}
	return (0);
}
