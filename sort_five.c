/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:08:13 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/20 19:49:51 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_stack *a)
{
	t_node *current;
	int min;
	
	current = a->top;
	min = current->value;
	while(current)
	{
		if(current->value < min)
			min = current->value;
		current = current->next;
	}
	return(min);
}

void move_to_top(t_stack *a, int value)
{
	
}