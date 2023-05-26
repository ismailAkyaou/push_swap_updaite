/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:23:56 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/22 23:15:33 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_mini_sort(t_stack **stk_a, t_stack **stk_b)
{
	if (check_order(*stk_a))
		return ;
	if (ft_lst_size(*stk_a) == 2)
		ft_sa(stk_a);
	else if (ft_lst_size(*stk_a) == 3)
		ft_sort_3(stk_a);
	else if (ft_lst_size(*stk_a) == 4)
		ft_sort_4(stk_a, stk_b);
	else if (ft_lst_size(*stk_a) == 5)
		ft_sort_5(stk_a, stk_b);
	else if (ft_lst_size(*stk_a) <= 100)
	{
		ft_push_a_to_b(stk_a, stk_b, 5);
		ft_push_b_to_a(stk_a, stk_b);
	}
	else if (ft_lst_size(*stk_a) > 100)
	{
		ft_push_a_to_b(stk_a, stk_b, 9);
		ft_push_b_to_a(stk_a, stk_b);
	}
}
