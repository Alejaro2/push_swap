/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:55:36 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/21 17:26:49 by alejaro2         ###   ########.fr       */
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
