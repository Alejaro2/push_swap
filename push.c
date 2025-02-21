/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:26:25 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/21 17:27:42 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack *from, t_stack *to)
{
    if (!from || !from->top)
        return;

    t_node *temp = from->top;
    from->top = from->top->next;
    
    temp->next = to->top;
    to->top = temp;
}
void pa(t_stack *a, t_stack *b)
{
    if (!b || !b->top) 
        return;
    push(b, a);
    b->size--;
    a->size++;
}

void pb(t_stack *a, t_stack *b)
{
    if (!a || !a->top) 
        return;
    push(a, b);
    a->size--;
    b->size++;
}
