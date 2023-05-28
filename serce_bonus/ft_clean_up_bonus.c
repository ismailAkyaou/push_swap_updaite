/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_up_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:47:37 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/27 22:58:45 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_clean_up_bonus(t_stack *stk_a, t_stack *stk_b)
{
	t_stack		*temp;
	t_stack		*temp1;

	while (stk_a)
	{
		temp = stk_a;
		stk_a = stk_a->next;
		free(temp);
	}
	while (stk_b)
	{	
		temp1 = stk_b;
		stk_b = stk_b->next;
		free(temp1);
	}
}
