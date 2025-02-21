/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:08:13 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/21 17:51:49 by alejaro2         ###   ########.fr       */
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
int get_index(t_stack *a, int min)
{
	t_node *current;
	int i;

	current = a->top;
	i = 0;
	while(current)
	{
		if(current->value == min)
			return(i);
		current = current->next;
		i++;
	}
	return(-1);
}

void sort_five(t_stack *a, t_stack *b)
{
	int i;
	int min;
	
	i = 0;
	

	while (i < 2)
	{
		min = find_min(a);
		while(a->top->value != min)
		{
			if(get_index(a, min) < a->size / 2)
				ra(a);
			else
				rra(a);
		}
		push(a, b);
		a->size--;
		b->size++;
		i++;
	}
	sort_three(a);
	pb(a, b);
	pb(a, b);
	a ->size += 2;
}

