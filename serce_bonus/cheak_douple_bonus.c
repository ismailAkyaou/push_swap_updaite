/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_douple_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:12:21 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/26 16:41:06 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	cheak_douple(char **douple)
{
	int	i;
	int	j;
	int	i_nbr;
	int	j_nbr;

	i = 0;
	j = 1;
	while (douple[i])
	{
		j = i + 1;
		while (douple[j])
		{
			i_nbr = atoi(douple[i]);
			j_nbr = atoi(douple[j]);
			if (i_nbr == j_nbr)
				ft_error();
			j++;
		}
		i++;
	}
}
