/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:39:59 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/13 13:38:48 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->a_size == 0 || stack->a_size == 1)
		return ;
	i = 0;
	tmp = stack->a_array[i];
	while (++i < stack->a_size)
		stack->a_array[i - 1] = stack->a_array[i];
	stack->a_array[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->b_size == 0 || stack->b_size == 1)
		return ;
	i = 0;
	tmp = stack->b_array[i];
	while (++i < stack->b_size)
		stack->b_array[i - 1] = stack->b_array[i];
	stack->b_array[i - 1] = tmp;
	ft_printf("rb\n");
}

int	ft_sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->a_array[0];
	stack->a_array[0] = stack->a_array[1];
	stack->a_array[1] = tmp;
	write(1, "sa\n", 3);
	return (1);
}

void	ft_sb(t_stack *stack)
{
	int	tmp;

	if (stack->b_size == 0 || stack->b_size == 1)
		return ;
	tmp = 0;
	tmp = stack->b_array[0];
	stack->b_array[0] = stack->b_array[1];
	stack->b_array[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_stack *stack)
{
	int	tmp;

	if (stack->a_size == 0 || stack->a_size == 1 || (stack->b_size == 0
			|| stack->b_size == 1))
		return ;
	tmp = 0;
	tmp = stack->a_array[0];
	stack->a_array[0] = stack->a_array[1];
	stack->a_array[1] = tmp;
	tmp = stack->b_array[0];
	stack->b_array[0] = stack->b_array[1];
	stack->b_array[1] = tmp;
	ft_printf("ss\n");
}
