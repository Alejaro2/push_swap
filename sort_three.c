/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:16:25 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/20 11:53:17 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(t_stack *a)
{
    t_node *first;
    t_node *second;
    t_node *third;
    
    first = a->top;
    second = a->top->next;
    third = a->top->next->next;
    
    if(first->value > second->value && first->value < third->value && second->value < third->value)
        sa(a);
    else if(first->value > second->value && first->value > third->value && second->value < third->value)
        ra(a);
    else if(first->value < second->value && second->value > third->value && third->value < first->value)
        rra(a);
    else if(first->value < second->value && first->value < third->value && second->value > third->value)
    {
        rra(a);
        sa(a);
    }
    else if(first->value > second->value && second->value > third->value)
    {
        ra(a);
        sa(a);
    }
    
}