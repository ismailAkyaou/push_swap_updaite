/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bouns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:49:42 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/27 23:25:23 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "limits.h"

void	help(char *line, t_stack *stk_a, t_stack *stk_b)
{
	line = get_next_line(0);
	while (line)
	{
		operation(line, &stk_a, &stk_b);
		free(line);
		line = get_next_line(0);
	}
	free (line);
	if (stk_a != NULL && stk_b == NULL)
	{
		if (check_order(stk_a) == 1 && stk_b == NULL)
			write(1, "OK\n", 3);
		else if (check_order(stk_a) == 0 || stk_b != NULL)
			write(1, "KO\n", 3);
	}
	else
		write(1, "KO\n", 3);
	ft_clean_up_bonus(stk_a, stk_b);
}

char	**delete_free(char **str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	main(int ac, char **av)
{
	char		*str;
	int			i;
	char		**k;
	t_virs		virs;

	if (ac == 1)
		return (0);
	virs.stk_b = NULL;
	str = ft_strdup("");
	i = 1;
	ft_parsing(av);
	while (av[i])
		str = ft_strjoin(str, av[i++]);
	k = ft_split(str, ' ');
	free(str);
	cheak_douple(k);
	virs.stk_a = ft_lstnew(ft_atoi(k[0]), -1);
	i = 1;
	while (k[i])
		ft_lst_add_back(&virs.stk_a, ft_lstnew(ft_atoi(k[i++]), -1));
	delete_free(k);
	help(virs.line, virs.stk_a, virs.stk_b);
	return (0);
}
