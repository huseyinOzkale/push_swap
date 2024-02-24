/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:56:42 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/12 18:49:30 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_st(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		len++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (len);
}

char	*ft_strcr(const char *s, char c, size_t i)
{
	size_t	len;
	size_t	tmp;

	tmp = i;
	len = 0;
	while (s[tmp] != c && s[tmp])
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	res_i;
	char	**res;

	i = 0;
	res_i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc((ft_st(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			res[res_i] = ft_strcr(s, c, i);
			res_i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	res[res_i] = 0;
	return (res);
}
