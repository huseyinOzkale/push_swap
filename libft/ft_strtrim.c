/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:37:42 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/21 19:17:28 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
