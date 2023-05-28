/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:33:28 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/27 22:58:10 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_5_next(t_stack **stack_a, int *j, int possition)
{
	*j = 0;
	while (*j < possition)
	{
		ft_ra(stack_a);
		(*j)++;
	}
}

void	ft_sort_5(t_stack **stack_a, t_stack **stack_b)
{
	t_virs	virs;
	int		i;

	i = 0;
	while (i < 2)
	{
		virs.possition = ft_get_possition(stack_a);
		if (virs.possition < (5 / 2))
			ft_sort_5_next(stack_a, &virs.j, virs.possition);
		else
		{
			virs.j = 0;
			while (virs.j < ft_lst_size(*stack_a) - virs.possition)
			{
				ft_rra(stack_a);
				virs.j++;
			}
		}
		ft_pb(stack_a, stack_b);
		i++;
	}
	ft_sort_3(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
