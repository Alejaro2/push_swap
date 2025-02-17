/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:41:38 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/17 11:13:11 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	int	count;
	int	*numbers;
	int	i;
	t_stack *stack_a;

	if (argc >= 2)
	{
		count = valid_digits(argc, argv);
		numbers = convert_init(argc, argv, count);
		duplicate(numbers, count);
		if (is_sorted(numbers, count))
		{
			free(numbers);
			return(0);
		}

		stack_a = create_stack();
		if(!stack_a)
			return(1);
			
		i = 0;
		while (i < count)
		{
			lstadd(stack_a, numbers[i]);
			i++;
		}

		t_node *current = stack_a->top;
		while (current)
		{
			printf("%d\n", current->value);
			current = current->next;
		}
		free(numbers);
	}
	return (0);
}
