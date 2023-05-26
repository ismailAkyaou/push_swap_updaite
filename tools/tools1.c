/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:24:05 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/24 15:24:10 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(void)
{
	write (2, "ERROR\n", 6);
	exit (1);
}

int	is_deget(char dejit)
{
	if ((dejit >= '0' && dejit <= '9')
		|| (dejit == '-' || dejit == '+' || dejit == ' '))
		return (1);
	return (0);
}

void	ft_extra_char(char **str)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (str[i] != NULL)
	{
		while (str[i][j])
		{
			if (!is_deget(str[i][j]))
				ft_error();
			j++;
		}
		j = 0;
		i++;
	}
}

void	check_signe1(char **str)
{
	int		i;
	int		j;

	i = 1;
	while (str[i])
	{
		j = 0;
		if (ft_strlen(str[i]) == 0)
			ft_error ();
		while (str[i][j])
		{
			if ((str[i][j] == '-' || str[i][j] == '+') && j != 0)
			{
				if (str[i][j - 1] != ' ' ||
					(str[i][j + 1] < '0' || str[i][j + 1] > '9'))
					ft_error();
			}
			j++;
		}
		i++;
	}
}

void	check_signe2(char **str)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		while (str[i][j])
		{
			if ((str[i][j] == '-' || str[i][j] == '+') && j == 0)
			{
				if (str[i][j + 1] < '0' || str[i][j + 1] > '9')
					ft_error();
			}
			if (str[i][j] != ' ' && str[i][j] != '\t' && str[i][j] != '\0')
				k++;
			j++;
		}
		i++;
	}
	if (k == 0)
		ft_error ();
}
