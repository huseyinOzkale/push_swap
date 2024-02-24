/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:17:18 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/18 14:19:00 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack *stack, int len, char c)
{
	if (c == 'a')
		ft_pa(stack);
	else
		ft_pb(stack);
	len--;
	return (len);
}

int	ft_sortsb(t_stack *stack, int len)
{
	if (len == 1)
		ft_pa(stack);
	else if (len == 2)
	{
		if (stack->b_array[0] < stack->b_array[1])
			ft_sb(stack);
		while (len--)
			ft_pa(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a_array[0] < stack->a_array[1]
				&& stack->a_array[1] < stack->a_array[2]))
		{
			if (len == 1 && stack->a_array[0] > stack->a_array[1])
				ft_sa(stack);
			else if (len == 1 || (len >= 2
					&& stack->b_array[0] > stack->b_array[1]) || (len == 3
					&& stack->b_array[0] > stack->b_array[2]))
				len = ft_push(stack, len, 'a');
			else
				ft_sb(stack);
		}
	}
	return (0);
}

int	ft_quicksort2(t_stack *stack, int len, int midkey, int r)
{
	int	size;

	if (is_sorted(stack, 'b') == 1)
		while (len--)
			ft_pa(stack);
	if (len <= 3)
	{
		ft_sortsb(stack, len);
		return (1);
	}
	size = len;
	if (!ft_get_mid(&midkey, stack->b_array, len))
		return (0);
	while (len != size / 2)
	{
		if (stack->b_array[0] >= midkey && len--)
			ft_pa(stack);
		else if (++r)
			ft_rb(stack);
	}
	while (size / 2 != stack->b_size && r--)
		ft_rrb(stack);
	return (ft_quicksort1(stack, size / 2 + size % 2, 0) && ft_quicksort2(stack,
			size / 2, 0, 0));
}

void	ft_quicksort3(t_stack *stack, int len)
{
	if (len == 3 && stack->a_size == 3)
		sort_three(stack);
	else if (len == 2)
	{
		if (stack->a_array[0] > stack->a_array[1])
			ft_sa(stack);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a_array[0] < stack->a_array[1]
				&& stack->a_array[1] < stack->a_array[2]))
		{
			if (len == 3 && stack->a_array[0] > stack->a_array[1]
				&& stack->a_array[2] > stack->a_array[1])
				ft_sa(stack);
			else if (len == 3 && !(stack->a_array[2] > stack->a_array[0]
					&& stack->a_array[2] > stack->a_array[1]))
				len = ft_push(stack, len, 'b');
			else if (stack->a_array[0] > stack->a_array[1])
				ft_sa(stack);
			else if (len++)
				ft_pa(stack);
		}
	}
}
