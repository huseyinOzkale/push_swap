/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:17:55 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/20 12:14:02 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*str;

	a = ft_strlen(s);
	if (start >= a)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
	}
	else
	{
		if (len > a - start)
			len = a - start;
		str = (char *)malloc(len + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, s + start, len + 1);
	}
	return (str);
}
