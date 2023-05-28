/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:14:24 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:06 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_ra(t_stack **s_a)
{
	ft_rotate (s_a);
}

void	ft_rb(t_stack **s_b)
{
	ft_rotate (s_b);
}

void	ft_rr(t_stack **s_a, t_stack **s_b)
{
	ft_rotate (s_a);
	ft_rotate (s_b);
}

void	ft_rra(t_stack **s_a)
{
	ft_rotate_revers (s_a);
}

void	ft_rrb(t_stack **s_b)
{
	ft_rotate_revers (s_b);
}
