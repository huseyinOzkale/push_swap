/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:38:01 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/17 18:11:16 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_25line(t_stack *stack)
{
	ft_samenumber(stack, stack->size);
	if (is_sorted(stack, 'a'))
		return ;
	if (stack->a_size == 2)
		ft_sa(stack);
	else if (stack->a_size == 3)
		sort_three(stack);
	else
		ft_quicksort1(stack, stack->size, 0);
	free(stack->a_array);
	free(stack->b_array);
}

int	ft_sort_atoi(char *str, int *stack, int i, int a)
{
	long	result;

	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			a = -1;
	if (!str[i])
		ft_error(stack);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i++] - '0') + (result * 10);
		if ((a == 1 && (result > 2147483647)) || (a == -1
				&& (result > 2147483648)))
			ft_error(stack);
	}
	if (str[i])
		ft_error(stack);
	return (result * a);
}
