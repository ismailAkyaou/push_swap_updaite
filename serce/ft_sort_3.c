/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:02:48 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/27 16:13:16 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_3(t_stack **stack)
{
	int		s1;
	int		s2;
	int		s3;

	s1 = (*stack)->data;
	s2 = (*stack)->next->data;
	s3 = (*stack)->next->next->data;
	if (s1 < s3 && s3 < s2)
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if (s1 > s2 && s2 > s3 && s1 > s3)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (s1 > s2 && s2 < s3 && s1 > s3)
		ft_ra(stack);
	else if (s1 > s2 && s2 < s3 && s1 < s3)
		ft_sa(stack);
	else if (s1 < s2 && s2 > s3 && s1 > s3)
		ft_rra(stack);
}

int	ft_get_min(t_stack **stack)
{
	int			minimon;
	t_stack		*tmp;

	tmp = (*stack);
	minimon = (*stack)->data;
	while ((*stack))
	{
		if ((*stack)->data < minimon)
			minimon = (*stack)->data;
		(*stack) = (*stack)->next;
	}
	(*stack) = tmp;
	return (minimon);
}

int	ft_get_possition(t_stack **stack)
{
	int		minimon;
	int		i;
	t_stack	*tmp;

	i = 0;
	minimon = ft_get_min(stack);
	tmp = (*stack);
	while ((*stack))
	{
		if ((*stack)->data == minimon)
		{
			(*stack) = tmp;
			return (i);
		}
		i++;
		(*stack) = (*stack)->next;
	}
	(*stack) = tmp;
	return (i);
}
