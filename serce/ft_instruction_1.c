/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:32:03 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/20 17:33:23 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **s_a)
{
	ft_swap(s_a);
	write (1, "sa\n", 3);
}

void	ft_sb(t_stack **s_b)
{
	ft_swap(s_b);
	write (1, "sb\n", 3);
}

void	ft_ss(t_stack **s_a, t_stack **s_b)
{
	ft_swap(s_a);
	ft_swap(s_b);
	write(1, "ss\n", 3);
}

void	ft_pa(t_stack **s_a, t_stack **s_b)
{
	ft_push_b(s_b, s_a);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **s_a, t_stack **s_b)
{
	ft_push_b(s_a, s_b);
	write(1, "pb\n", 3);
}
