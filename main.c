/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:45:58 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/18 14:47:06 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size(t_stack *stack, char **argv)
{
	int	i;

	i = -1;
	stack->size = ft_stacksize(argv);
	stack->a_array = malloc(stack->size * sizeof(int));
	if (!stack->a_array)
		return ;
	stack->a_size = stack->size;
	stack->b_array = malloc(stack->size * sizeof(int));
	if (!stack->b_array)
	{
		free(stack->a_array);
		return ;
	}
	stack->b_size = 0;
	while (++i < stack->size)
		stack->a_array[i] = ft_sort_atoi(argv[i], stack->a_array, 0, 1);
	ft_25line(stack);
}

int	is_sorted(t_stack *stack, char str)
{
	int	i;

	i = 0;
	if (str == 'a')
	{
		while (i < stack->a_size - 1)
		{
			if (stack->a_array[i] > stack->a_array[i + 1])
				return (0);
			i++;
		}
	}
	else if (str == 'b')
	{
		i = 1;
		while (i < stack->size)
		{
			if (stack->b_array[i - 1] < stack->b_array[i])
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}

int	ft_quicksort1(t_stack *stack, int len, int midkey)
{
	int	size;
	int	r;

	r = 0;
	if (is_sorted(stack, 'a') == 1)
		return (1);
	size = len;
	if (len <= 3)
	{
		ft_quicksort3(stack, len);
		return (1);
	}
	if (!ft_get_mid(&midkey, stack->a_array, len))
		return (0);
	while (len != size / 2 + size % 2)
	{
		if (stack->a_array[0] < midkey && (len--))
			ft_pb(stack);
		else if (++r)
			ft_ra(stack);
	}
	while (size / 2 + size % 2 != stack->a_size && r--)
		ft_rra(stack);
	return (ft_quicksort1(stack, size / 2 + size % 2, 0) && ft_quicksort2(stack,
			size / 2, 0, 0));
}

void	sort_three(t_stack *stack)
{
	int	*a;

	a = stack->a_array;
	if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		ft_sa(stack);
	if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		ft_ra(stack);
	if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		ft_rra(stack);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		j;
	char	*tmp;
	char	*tmp2;

	j = 3;
	if (argc > 1)
	{
		if (argc > 2)
		{
			tmp2 = ft_strjoin(argv[1], argv[2]);
			while (argc != j)
			{
				tmp = ft_strjoin(tmp2, argv[j++]);
				free(tmp2);
				tmp2 = tmp;
			}
			argv = ft_split(tmp2, ' ');
		}
		else
			argv = ft_split(*++argv, ' ');
		if (!*argv)
			return (write(2, "Error\n", 6));
		ft_size(&stack, argv);
	}
}
