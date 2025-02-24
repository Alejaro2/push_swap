/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:23:27 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 16:02:22 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *stack)
{
	if(!stack || !stack->top || !stack->top->next)
		return;
		
	t_node *first;
	t_node *last;
	
	first = stack->top;
	last = stack->top;

	while (last->next)
		last = last->next;
	
	stack->top = first->next;
	last->next = first;
	first->next = NULL;

	 write(1, "ra\n", 3);
}

void rb(t_stack *b)
{
	if(!b || !b->top || !b->top->next)
		return;
		
	t_node *first;
	t_node *last;

	first = b->top;
	last = b->top;

	while (last->next)
		last = last->next;
	
	b->top = first->next;
	last->next = first;
	first->next = NULL;

	 write(1, "rb\n", 3);
}
void rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}


