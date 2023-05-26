/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:14:24 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/20 17:33:27 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **s_a)
{
	ft_rotate (s_a);
	write (1, "ra\n", 3);
}

void	ft_rb(t_stack **s_b)
{
	ft_rotate (s_b);
	write (1, "rb\n", 3);
}

void	ft_rr(t_stack **s_a, t_stack **s_b)
{
	ft_rotate (s_a);
	ft_rotate (s_b);
	write (1, "rr\n", 3);
}

void	ft_rra(t_stack **s_a)
{
	ft_rotate_revers (s_a);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_stack **s_b)
{
	ft_rotate_revers (s_b);
	write (1, "rrb\n", 4);
}
