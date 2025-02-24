/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:41:38 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 16:12:59 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void init_stack_values(t_stack *stack, int *numbers, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		lstadd(stack, numbers[i]);
		i++;
	}
}
t_stack *process_stack(int *numbers, int count)
{
	t_stack *stack_a;
	t_node *current;
	
	stack_a = create_stack();
	if(!stack_a)
		return(NULL);
	init_stack_values(stack_a, numbers, count);
	ft_bubblesort(numbers, count);
	
	current = stack_a->top;
	while(current)
	{
		current->s_index = ft_index(current->value, numbers, count);
		current = current->next;
	}
	
	return(stack_a);
}
void sort_stack(t_stack *a, int count)
{
	t_stack *b;

	if(count == 2 || count == 3)
		sort_three(a);
	else if(count <= 5)
	{
		b = create_stack();
		if(!b)
			return;
		sort_five(a, b);
		free_stack(b);
	}
	else
	{
		b = create_stack();
		if (!b)
			return;
		k_sort1(a, b, count);
		k_sort2(a, b, count);
		free_stack(b);
	}
}

void check_and_sort(int *numbers, int count)
{
	t_stack *stack_a;
	
	if(is_sorted(numbers, count))
	{
		free(numbers);
		return;
	}
	stack_a = process_stack(numbers, count);
	if(!stack_a)
	{
		free(numbers);
		return;
	}
	sort_stack(stack_a, count);
	/* print_stack(stack_a); */
	free(numbers);
	free_stack(stack_a);
}


int	main(int argc, char **argv)
{
	int	count;
	int	*numbers;
	
	if (argc < 2)
		return(0);
	count = valid_digits(argc, argv);
	numbers = convert_init(argc, argv, count);
	duplicate(numbers, count);
	check_and_sort(numbers, count);
	return (0);
}




