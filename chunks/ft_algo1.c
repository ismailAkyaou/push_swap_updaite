/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:14:31 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:44:39 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max_index(t_stack *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->next && stack->next->index > max)
			max = stack->next->index;
		stack = stack->next;
	}
	return (max);
}

int	ft_get_possition_1(t_stack **stack, int location)
{
	t_stack		*temp;
	int			k;

	k = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->index == location)
		{
			break ;
		}
		temp = temp->next;
		k++;
	}
	return (k);
}

void	ft_push_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*stack;

	stack = NULL;
	while ((*stack_b))
	{
		if ((*stack_b)->index == ft_max_index(*stack_b)
			|| (*stack_b)->index == ft_max_index(*stack_b) - 1)
			ft_pa(stack_a, stack_b);
		else if (ft_get_possition_1(stack_b,
				ft_max_index(*stack_b)) > ft_lst_size(*stack_b) / 2)
		{
			while (!((*stack_b)->index == ft_max_index(*stack_b)
					|| (*stack_b)->index == ft_max_index(*stack_b) - 1))
				ft_rrb(stack_b);
		}
		else
			while (!((*stack_b)->index == ft_max_index(*stack_b)
					|| (*stack_b)->index == ft_max_index(*stack_b) - 1))
				ft_rb(stack_b);
		if (ft_lst_size(*stack_a) > 1
			&& (*stack_a)->index > (*stack_a)->next->index)
			ft_sa(stack_a);
	}
}

void	ft_push_a_to_b(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		chunks;
	int		chunks_size;
	int		i;

	i = 0;
	chunks = ft_lst_size(*stack_a) / size;
	chunks_size = ft_lst_size(*stack_a) / size;
	while (ft_lst_size(*stack_a))
	{
		if ((*stack_a)->index <= chunks)
		{
			if ((*stack_a)->index <= chunks - chunks_size / 2)
				ft_pb(stack_a, stack_b);
			else
			{
				ft_pb(stack_a, stack_b);
				ft_rb(stack_b);
			}
			i++;
		}
		else
			ft_ra(stack_a);
		if (i >= chunks)
			chunks += chunks_size;
	}
}
