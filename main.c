/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:41:38 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/10 15:43:03 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	count;
	int	*numbers;
	int	i;

	if (argc >= 2)
	{
		count = valid_digits(argc, argv);
		numbers = convert_init(argc, argv, count);
		duplicate(numbers, count);
		if (is_sorted(numbers, count))
			return (0);
		i = 0;
		while (i < count)
		{
			printf("%d\n", numbers[i]);
			i++;
		}
	}
	return (0);
}
