/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:50:50 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/26 14:33:27 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void del_node(t_stack *stack, int *value, int *index)
{
	t_node *first;
	
	if(!stack || !stack->top)
	{
		*value = 0;
		*index = 0;
		return;
	}
	
	first = stack->top;
	*value = first->value;
	*index = first->s_index;
	stack->top = first->next;
	free(first);
	stack->size--;
}
