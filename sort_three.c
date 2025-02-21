/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:16:25 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/21 18:36:17 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_stack *a)
{
    t_node *first;
    t_node *second;

    if(!a || !a->top || !a->top->next)
        return;

    first = a->top;
    second = a->top->next;

    if (first->value > second->value)
        sa(a);
}

void check_and_swap(t_stack *a, t_node *first, t_node *second, t_node *third)
{
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
void sort_three(t_stack *a)
{
    t_node *first;
    t_node *second;
    t_node *third;

    if (!a || !a->top || !a->top->next)
        return;
    
    first = a->top;
    second = a->top->next;
    
    if(!second->next)
    {
        sort_two(a);
        return;
    }
    third = second->next;
    check_and_swap(a, first, second, third);
}
