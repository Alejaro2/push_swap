/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:51:33 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/23 12:58:11 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_max_to_top(t_stack *b, int max)
{
    while(b->top->value != max)
    {
        if(get_index(b, max) < b->size / 2)
            rb(b);
        else 
            rrb(b);
    }
}

void k_sort2(t_stack *a, t_stack *b)
{
    int max;

    while(b->size > 0)
    {
        max = find_max(b);
        move_max_to_top(b, max);
        pa(a, b);
    }
}