/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:29:05 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/23 20:25:10 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void assign_s_index(t_stack *a)
{
    t_node *current;
    t_node *compare;
    int index;
    
    index = 0;
    
    current = a->top;
    while(current)
    {
        compare = a->top;
        while(compare)
        {
            if(compare->value < current->value)
                index++;
            compare = compare->next;
        }
    }
    
}

void move_to_b(t_stack *a, t_stack *b, int min, int max)
{
    while(a->size > 5)
    {
        if(a->top->value >= min && a->top->value <= max)
        {
            pb(a, b);
            if(b->top->value < max - (max-min) / 2)
                rb(b);
        }
        else
            ra(a);
    }
}

void k_sort1(t_stack *a, t_stack *b, int count)
{
    int chunk_size;
    int min;
    int max;

    chunk_size = count / 5;
    min = find_min(a);
    max = min + chunk_size;
    move_to_b(a, b, min, max);
}