/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:23:27 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 13:50:17 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_stack *stack)
{
	if(!stack || !stack->top || !stack->top->next)
		return;
	
	t_node *prev = NULL;
	t_node *last = stack->top;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}

	prev->next = NULL;
	last->next = stack->top;
	stack->top = last;

	 write(1, "rra\n", 4);
}

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

void rrb(t_stack *b)
{
	if (!b || !b->top || !b->top->next)
		return;

	t_node *prev;
	t_node *last;

	prev = NULL;
	last = b->top;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}

	prev->next = NULL;
	last->next = b->top;
	b->top = last;

	 write(1, "rrb\n", 4);
}
