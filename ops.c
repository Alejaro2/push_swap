/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:24:51 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/26 14:54:40 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, char x, int b)
{
	t_node	*temp;

	if (stack->top == NULL || stack->top->next == NULL)
		return ;
	temp = stack->top;
	stack->top = temp->next;
	temp->next = stack->top->next;
	stack->top->next = temp;
	if (b == 1)
	{
		write(1, "s", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}
void	push(t_stack *src, t_stack *dst, char x, int b)
{
	int	index;
	int	value;

	if (!src || !src->top)
		return ;
	del_node(src, &value, &index);
	lstadd(dst, value, index);
	if (b == 1)
	{
		write(1, "p", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	rotate(t_stack *stack, char x, int b)
{
	t_node	*current;
	t_node	*temp;

	if (!stack->top || !stack->top->next)
		return ;
	temp = stack->top;
	stack->top = temp->next;
	current = stack->top;
	while (current->next)
		current = current->next;
	current->next = temp;
	temp->next = NULL;
	if(b == 1)
	{
		write(1, "r", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	reverse(t_stack *stack, char x, int b)
{
	t_node *
}
