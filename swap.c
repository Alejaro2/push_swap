/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:55:36 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 15:59:36 by alejaro2         ###   ########.fr       */
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

	write(1, "sa\n", 3);
}
void sb(t_stack *stack_b)
{
	if(!stack_b || !stack_b->top || !stack_b->top->next)
		return;
	
	t_node *first = stack_b->top;
	t_node *second = first->next;

	first->next = second->next;
	second->next = first;
	stack_b->top = second;

	write(1, "sb\n", 3);
}
void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
