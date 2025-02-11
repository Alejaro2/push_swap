/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:41:38 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/11 19:34:05 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	int	count;
	int	*numbers;
	int	i;
	t_stack *stack;

	if (argc >= 2)
	{
		count = valid_digits(argc, argv);
		numbers = convert_init(argc, argv, count);
		duplicate(numbers, count);
		if (is_sorted(numbers, count))
			return (0);

		stack = create_stack();
		if(!stack)
			return(1);
			
		i = 0;
		while (i < count)
		{
			lstadd(stack, numbers[i]);
			i++;
		}

		t_node *current = stack->top;
		while (current)
		{
			printf("%d\n", current->value);
			current = current->next;
		}
		
		
		
	}
	return (0);
}
