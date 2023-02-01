/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:08:21 by eduarodr          #+#    #+#             */
/*   Updated: 2023/02/01 13:16:22 by eduardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				box;
	struct s_list	*next;
}			t_list;

t_list	*create_number(int box);
t_list	*lstlast(t_list *head);
void	sa(t_list	*list);
void	ra(t_list	*list);
void	rra(t_list **list);
void	rrb(t_list **list);
void	sort3(t_list **list);
int		ft_atoi(const char *nptr);
void	rr(t_list *stack_a, t_list *stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	print_list(t_list *head);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_printf(const char *format, ...);
void	sort5(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_src, t_list **stack_dest);
void	sb(t_list *list);
void	rb(t_list *list);
void	pb(t_list **stack_src, t_list **stack_dest);
int		smallest(t_list *list);
int		ft_lstsize(t_list *lst);
int		get_pos(int pos, t_list *list);
void	sort_chunks(t_list **stack_a, t_list **stack_b);
int		biggest(t_list *list);
void	biggest_stack_a25(t_list **stack_a, t_list **stack_b);
void	biggest_stack_b25(t_list **stack_a, t_list **stack_b);
void	smallest_stack_b25(t_list **stack_a, t_list **stack_b);
void	smallest_stack_a25(t_list **stack_a, t_list **stack_b);
void	smallest_stack_a50(t_list **stack_a, t_list **stack_b);
void	smallest_stack_b50(t_list **stack_a, t_list **stack_b);
void	sort25plsA(t_list **stack_a, t_list **stack_b);

#endif
