/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:00:05 by huozkale          #+#    #+#             */
/*   Updated: 2023/10/18 18:00:47 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	number;

	number = n;
	len = ft_len(number);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (number == 0)
		*str = '0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	while (number != 0)
	{
		str[len] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
