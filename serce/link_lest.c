/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_lest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:02:17 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/22 22:16:14 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int data, int index)
{
	t_stack		*new;
	static int	i;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = index;
	new->possition = i++;
	new->next = NULL;
	return (new);
}

void	ft_lst_add_back(t_stack **lst, t_stack *new)
{
	t_stack		*emty;

	if (!new || !lst)
		return ;
	emty = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (emty->next)
		emty = emty->next;
	emty->next = new;
}

void	ft_lst_add_front(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

int	ft_lst_size(t_stack *lst)
{
	size_t		k;

	k = 0;
	while (lst)
	{
		lst = lst->next;
		k++;
	}
	return (k);
}
