/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:34:00 by huozkale          #+#    #+#             */
/*   Updated: 2024/02/18 14:28:03 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack
{
	int	*a_array;
	int	*b_array;
	int	a_size;
	int	b_size;
	int	size;

}		t_stack;

int		ft_sort_atoi(char *str, int *stack, int i, int a);
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack);
int		is_sorted(t_stack *stack, char str);
int		ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_pa(t_stack *stack);
int		ft_get_mid(int *midvalue, int *stack, int size);
void	ft_sort_tmp(int *tmps, int size);
int		ft_stacksize(char **argv);
void	ft_samenumber(t_stack *stack, int size);
int		ft_quicksort1(t_stack *stack, int len, int midkey);
int		ft_quicksort2(t_stack *stack, int len, int midkey, int r);
void	ft_quicksort3(t_stack *stack, int len);
int		ft_sortsb(t_stack *stack, int len);
void	ft_size(t_stack *stack, char **argv);
void	sort_three(t_stack *stack);
int		ft_push(t_stack *stack, int len, char c);
void	ft_error(int *stack);
void	ft_25line(t_stack *stack);

#endif