/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:01:42 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/17 12:24:38 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *create_node(int value)
{
	t_node *node = malloc(sizeof(t_node));
	if(!node)
		return(NULL);
	node->value = value;
	node->next = NULL;
	return node;
}


t_stack *create_stack(void)
{
	t_stack *stack = malloc(sizeof(t_stack));
	if (!stack)
		return(NULL);
	stack->top = NULL;
	stack->size = 0;
	return stack;
	
}

void lstadd(t_stack *stack, int value)
{
	t_node *new_node = create_node(value);
	t_node *temp;
	
	if(!new_node)
		return;
	if(!stack->top)
		stack->top = new_node;
	else
	{
		temp = stack->top;
		while(temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	stack->size++;
}
