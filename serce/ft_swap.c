/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:19:21 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/22 22:49:49 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stack)
{
	int	temp;
	int	temp2;

	if ((*stack)->next == NULL)
		return ;
	temp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp;
	temp2 = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = temp2;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*temp;

	if (*stack && (*stack)->next)
	{
		temp = *stack;
		*stack = (*stack)->next;
		ft_lst_add_back (stack, ft_lstnew(temp->data, temp->index));
		free(temp);
	}
}

void	ft_rotate_revers(t_stack **stack)
{
	t_stack	*temp;

	if (*stack && (*stack)->next)
	{
		temp = *stack;
		while (temp->next->next)
			temp = temp->next;
		ft_lst_add_front(stack, ft_lstnew(temp->next->data, temp->next->index));
		free (temp->next);
		temp->next = NULL;
	}
}

void	ft_push_b(t_stack **src, t_stack **destination)
{
	t_stack	*temp;

	if (!*src)
		return ;
	temp = *src;
	ft_lst_add_front(destination, ft_lstnew((*src)->data, (*src)->index));
	if (*src && ((*src)->next))
		*src = ((*src)->next);
	else
	{
		((*src)->next) = NULL;
		*src = NULL;
	}
	free(temp);
}
