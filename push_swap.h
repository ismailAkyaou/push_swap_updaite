/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:42:04 by iakyaou           #+#    #+#             */
/*   Updated: 2023/05/25 22:49:01 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "get_next_line_bonus/get_next_line.h"

typedef struct s_stack
{
	int				data;
	int				index;
	int				possition;
	struct s_stack	*next;
}	t_stack;

typedef struct virs
{
	int		possition;
	int		j;
	int		k;
	int		chunks;
	int		dep;
}	t_virs;

void	ft_error(void);
int		is_deget(char dejit);
void	ft_parsing(char **str);
void	check_signe2(char **str);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
void	ft_swap(t_stack **stack);
void	ft_extra_char(char **str);
int		ft_lst_size(t_stack *lst);
void	ft_rotate(t_stack **stack);
char	*ft_strdup(const char *s1);
void	cheak_douple(char **douple);
int		check_order(t_stack *stack);
int		ft_get_possition(t_stack **stack);
t_stack	*ft_lstnew(int data, int index);
char	**ft_split(char const *s, char c);
void	ft_rotate_revers(t_stack **stack);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_lst_add_back(t_stack **alst, t_stack *new);
void	ft_lst_add_front(t_stack **lst, t_stack *new);
void	ft_push_b(t_stack **src, t_stack **destination);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_sa(t_stack **s_a);
void	ft_sb(t_stack **s_b);
void	ft_ss(t_stack **s_a, t_stack **s_b);
void	ft_pa(t_stack **s_a, t_stack **s_b);
void	ft_pb(t_stack **s_a, t_stack **s_b);
void	ft_ra(t_stack **s_a);
void	ft_rb(t_stack **s_b);
void	ft_rr(t_stack **s_a, t_stack **s_b);
void	ft_rra(t_stack **s_a);
void	ft_rrb(t_stack **s_b);
void	ft_rrr(t_stack **s_a, t_stack **s_b);
void	ft_sort_3(t_stack **stack);
void	ft_sort_4(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_5(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a_to_b(t_stack **stack_a, t_stack **stack_b, int size);
void	ft_push_b_to_a(t_stack **stack_a, t_stack **stack_b);
int		ft_max_index(t_stack *stack);
int		ft_get_possition_1(t_stack **stack, int location);
void	ft_mini_sort(t_stack **stk_a, t_stack **stk_b);
void	check_signe1(char **str);
void	operation(char *line, t_stack **stack_a, t_stack **stack_b);
void	ft_clean_up(t_stack *stk_a, t_stack *stk_b);

#endif