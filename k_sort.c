/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:34:20 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 13:34:56 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void k_sort1(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while (stack_a->top)
	{
		if (stack_a->top->s_index <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if (stack_a->top->s_index <= i + range)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}
void k_sort2(t_stack *stack_a, t_stack *stack_b, int length)
{
	while (length--)
	{
		if (get_index(stack_b, length) <= stack_b->size / 2)
		{
			while (stack_b->top->s_index != length)
				rb(stack_b);
		}
		else
		{
			while (stack_b->top->s_index != length)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}
