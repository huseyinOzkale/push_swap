/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:08:45 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/17 14:40:48 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tmp(int *tmps, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmps[i] > tmps[j])
			{
				tmp = tmps[i];
				tmps[i] = tmps[j];
				tmps[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	ft_get_mid(int *midkey, int *stack, int size)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc(size * sizeof(int));
	if (!tmp)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = stack[i];
		i++;
	}
	ft_sort_tmp(tmp, size);
	*midkey = tmp[size / 2];
	free(tmp);
	return (1);
}
