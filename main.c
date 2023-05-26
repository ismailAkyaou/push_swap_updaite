/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:29:34 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:34:00 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parsing(char **str)
{
	ft_extra_char(str);
	check_signe2(str);
	check_signe1(str);
}

int	ft_get_min_index(t_stack *stack)
{
	int			minimon;
	t_stack		*tmp;

	tmp = stack;
	while (stack)
	{
		if (stack->index == -1)
		{
			minimon = stack->data;
			break ;
		}
		stack = stack->next;
	}
	stack = tmp;
	while ((stack))
	{
		if (((stack)->data < minimon) && (stack)->index == -1)
			minimon = (stack)->data;
		(stack) = (stack)->next;
	}
	return (minimon);
}

void	ft_index(t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;
	int		index;
	int		min;

	i = 0;
	index = 1;
	tmp = *stack_b;
	i = ft_lst_size(*stack_b);
	while (i)
	{
		while ((*stack_b))
		{
			min = ft_get_min_index(*stack_b);
			if ((*stack_b)->data == min && (*stack_b)->index == -1)
			{
				(*stack_b)->index = index;
				index++;
				break ;
			}
			(*stack_b) = (*stack_b)->next;
		}
		*stack_b = tmp;
		i--;
	}
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
	t_stack		*stk_a;
	t_stack		*stk_b;
	t_stack		*tmp;

	if (ac == 1)
		return (0);
	stk_b = NULL;
	str = ft_strdup("");
	i = 1;
	ft_parsing(av);
	while (av[i])
	{
		str = ft_strjoin(str, av[i++]);
	}
	k = ft_split(str, ' ');
	free(str);
	cheak_douple(k);
	stk_a = ft_lstnew(ft_atoi(k[0]), -1);
	i = 1;
	while (k[i])
		ft_lst_add_back(&stk_a, ft_lstnew(ft_atoi(k[i++]), -1));
	delete_free(k);
	ft_index(&stk_a);
	ft_mini_sort(&stk_a, &stk_b);
	tmp = stk_a;
	ft_clean_up(stk_a, stk_b);
}
