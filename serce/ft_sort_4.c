/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:32:07 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/20 17:33:44 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int		possition;
	int		i;

	i = 0;
	possition = ft_get_possition(stack_a);
	while (i < possition)
	{
		ft_ra(stack_a);
		i++;
	}
	ft_pb(stack_a, stack_b);
	ft_sort_3(stack_a);
	ft_pa(stack_a, stack_b);
}
