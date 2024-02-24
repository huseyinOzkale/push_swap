/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:02:54 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/18 14:22:15 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int *stack)
{
	free(stack);
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_stacksize(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		argv++;
		i++;
	}
	return (i);
}

void	ft_samenumber(t_stack *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack->a_array[i] == stack->a_array[j])
				ft_error(stack->a_array);
			j++;
		}
		i++;
	}
}
