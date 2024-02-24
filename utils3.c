/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:37:41 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/14 17:19:02 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_size == 0 || stack->a_size == 1 || (stack->b_size == 0
			|| stack->b_size == 1))
		return ;
	i = 0;
	tmp = stack->a_array[i];
	while (++i < stack->a_size)
		stack->a_array[i - 1] = stack->a_array[i];
	stack->a_array[i - 1] = tmp;
	i = 0;
	tmp = stack->b_array[i];
	while (++i < stack->b_size)
		stack->b_array[i - 1] = stack->b_array[i];
	stack->b_array[i - 1] = tmp;
	ft_printf("rr\n");
}

void	ft_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_size == 0 || stack->a_size == 1)
		return ;
	i = stack->a_size - 1;
	tmp = stack->a_array[i];
	while (i)
	{
		stack->a_array[i] = stack->a_array[i - 1];
		i--;
	}
	stack->a_array[i] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->b_size == 0 || stack->b_size == 1)
		return ;
	i = stack->b_size - 1;
	tmp = stack->b_array[i];
	while (i)
	{
		stack->b_array[i] = stack->b_array[i - 1];
		i--;
	}
	stack->b_array[i] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_size == 0 || stack->a_size == 1
		|| (stack->b_size == 0 || stack->b_size == 1))
		return ;
	i = stack->a_size - 1;
	tmp = stack->a_array[i];
	while (i)
	{
		stack->a_array[i] = stack->a_array[i - 1];
		i--;
	}
	stack->a_array[i] = tmp;
	i = stack->b_size - 1;
	tmp = stack->b_array[i];
	while (i)
	{
		stack->b_array[i] = stack->b_array[i - 1];
		i--;
	}
	stack->b_array[i] = tmp;
	ft_printf("rrr\n");
}
