/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:54:35 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 16:02:28 by alejaro2         ###   ########.fr       */
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

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
