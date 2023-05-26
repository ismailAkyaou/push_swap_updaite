/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:59:04 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:47:53 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_clean_up(t_stack *stk_a, t_stack *stk_b)
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
