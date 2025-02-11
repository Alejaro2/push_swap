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