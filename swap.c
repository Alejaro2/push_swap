/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:55:36 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/20 12:55:39 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void sa(t_stack *stack)
{
	if(!stack || !stack->top || !stack->top->next)
		return;
	
	t_node *first = stack->top;
	t_node *second = first->next;

	first->next = second->next;
	second->next = first;
	stack->top = second;
}

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
	first->next = NULL;
	last->next = first;
	
}
void push(t_stack *from, t_stack *to)
{
    if (!from || !from->top)
        return;

    t_node *temp = from->top;
    from->top = from->top->next;
    
    temp->next = to->top;
    to->top = temp;
}



