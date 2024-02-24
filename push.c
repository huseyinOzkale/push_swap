/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:25:41 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/08 14:17:44 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack *stack)
{
	int	i;

	if (stack->a_size)
	{
		stack->b_size++;
		i = stack->b_size;
		while (--i > 0)
			stack->b_array[i] = stack->b_array[i - 1];
		stack->b_array[0] = stack->a_array[0];
		i = -1;
		stack->a_size--;
		while (++i < stack->a_size)
			stack->a_array[i] = stack->a_array[i + 1];
		ft_printf("pb\n");
	}
	else
		return ;
}

void	ft_pa(t_stack *stack)
{
	int	i;

	if (stack->b_size)
	{
		stack->a_size++;
		i = stack->a_size;
		while (--i > 0)
			stack->a_array[i] = stack->a_array[i - 1];
		stack->a_array[0] = stack->b_array[0];
		i = -1;
		stack->b_size--;
		while (++i < stack->b_size)
			stack->b_array[i] = stack->b_array[i + 1];
		ft_printf("pa\n");
	}
	else
		return ;
}
