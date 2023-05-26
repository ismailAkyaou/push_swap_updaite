/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:29:34 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:36:58 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bouns.h"

void	ft_parsing(char **str)
{
	ft_extra_char(str);
	check_signe2(str);
	check_signe1(str);
}

int	ft_get_min_index(t_stack *stack)
{
	int			minimon;
	t_stack		*tmp;

	tmp = stack;
	while (stack)
	{
		if (stack->index == -1)
		{
			minimon = stack->data;
			break ;
		}
		stack = stack->next;
	}
	stack = tmp;
	while ((stack))
	{
		if (((stack)->data < minimon) && (stack)->index == -1)
			minimon = (stack)->data;
		(stack) = (stack)->next;
	}
	return (minimon);
}

void	ft_index(t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;
	int		index;
	int		min;

	i = 0;
	index = 1;
	tmp = *stack_b;
	i = ft_lst_size(*stack_b);
	while (i)
	{
		while ((*stack_b))
		{
			min = ft_get_min_index(*stack_b);
			if ((*stack_b)->data == min && (*stack_b)->index == -1)
			{
				(*stack_b)->index = index;
				index++;
				break ;
			}
			(*stack_b) = (*stack_b)->next;
		}
		*stack_b = tmp;
		i--;
	}
}

void	operation(char *line, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_memcmp(line, "ra\n", 3) == 0)
		ft_ra(stack_a);
	else if (ft_memcmp(line, "rb\n", 3) == 0)
		ft_rb(stack_a);
	else if (ft_memcmp(line, "sa\n", 3) == 0)
		ft_sa(stack_a);
	else if (ft_memcmp(line, "sb\n", 3) == 0)
		ft_sb(stack_b);
	else if (ft_memcmp(line, "rra\n", 4) == 0)
		ft_rra(stack_a);
	else if (ft_memcmp(line, "rrb\n", 4) == 0)
		ft_rrb(stack_b);
	else if (ft_memcmp(line, "ss\n", 3) == 0)
		ft_ss(stack_a, stack_b);
	else if (ft_memcmp(line, "rr\n", 3) == 0)
		ft_rr(stack_a, stack_b);
	else if (ft_memcmp(line, "rrr\n", 4) == 0)
		ft_rrr(stack_a, stack_b);
	else if (ft_memcmp(line, "pa\n", 3) == 0)
		ft_pa(stack_a, stack_b);
	else if (ft_memcmp(line, "pb\n", 3) == 0)
		ft_pb(stack_a, stack_b);
	else
		ft_error();
}
