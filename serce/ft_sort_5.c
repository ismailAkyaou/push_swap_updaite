/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:33:28 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/20 17:33:48 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int		possition;
	int		i;
	int		j;

	i = 0;
	while (i < 2)
	{
		possition = ft_get_possition(stack_a);
		if (possition < (5 / 2))
		{
			j = 0;
			while (j < possition)
			{
				ft_ra(stack_a);
				j++;
			}
		}
		else
		{
			j = 0;
			while (j < ft_lst_size(*stack_a) - possition)
			{
				ft_rra(stack_a);
				j++;
			}
		}
		ft_pb(stack_a, stack_b);
		i++;
	}
	ft_sort_3(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

			//l mochkill hna kan khass mor ma nposhiw l b n7sbo ch7al b9a f a bach dik sa3 n9so dak size mn dak l index li 3andna bach
			// bach n3rfo ch7all bach ghadi nrotitiw b7all matalan 3ndna l index how 3 o 3 kbar mn 5/2 y3ni khass ndir rra o mymknch ndir rra 3 dyall lmrat hit l index 3 how lkhar khas
			// ndirha mra whda so size li 3ndna li howa 4 mora ma kant 5 o poshit wahd l b 4 n9ass mnha 3 li howa lindex at3tik 1 y3ni rra whda 
			// saf .
