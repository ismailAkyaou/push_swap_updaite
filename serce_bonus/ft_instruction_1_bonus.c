/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_1_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:32:03 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/24 16:30:38 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bouns.h"

void	ft_sa(t_stack **s_a)
{
	ft_swap(s_a);
}

void	ft_sb(t_stack **s_b)
{
	ft_swap(s_b);
}

void	ft_ss(t_stack **s_a, t_stack **s_b)
{
	ft_swap(s_a);
	ft_swap(s_b);
}

void	ft_pa(t_stack **s_a, t_stack **s_b)
{
	ft_push_b(s_b, s_a);
}

void	ft_pb(t_stack **s_a, t_stack **s_b)
{
	ft_push_b(s_a, s_b);
}
