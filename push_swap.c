/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:31:17 by alejaro2          #+#    #+#             */
/*   Updated: 2025/01/17 15:27:54 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *create_node(int value) {
	t_node *node = malloc(sizeof(t_node));
	if(!node)
		return(NULL);
	node->value = value;
	node->next = NULL;
	return node;
}


t_stack *create_stack(void) {
	t_stack *stack = malloc(sizeof(t_stack));
	if (!stack)
		return(NULL);
	stack->top = NULL;
	stack->size = 0;
	return stack;
	
}

void lstadd(t_stack *stack, int value){
	t_node *new_node = create_node(value);
	if(!new_node)
		return;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}


int main(int argc, char **argv)
{

	t_stack *stack = create_stack();

	// printf("%p\n", stack->top);
	
	lstadd(stack, 10);
	lstadd(stack, 11);
	lstadd(stack, 12);
	printf("%d\n", stack->top->value);
	printf("%d\n", stack->top->next->value);
	printf("%d\n", stack->top->next->next->value);
	printf("%p\n", stack->top->next->next->next);
	return(0);
}