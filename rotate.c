/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:23:27 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/21 18:38:48 by alejaro2         ###   ########.fr       */
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
}

void ra(t_stack *stack)
{
	if(!stack || !stack->top || !stack->top->next)
		return;
		
	t_node *first = stack->top;
	t_node *last = stack->top;

	while (last->next)
		last = last->next;
	
	stack->top = first->next;
	last->next = first;
	first->next = NULL;
}