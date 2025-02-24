/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:23:15 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 13:32:00 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sqrt(int num)
{
	int i = 0;

	while (i * i <= num)
		i++;
	return (i - 1);
}

int	ft_index(int n, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if(array[i] == n)
			return(i);
		i++;
	}
	return (-1);
}

void	ft_bubblesort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
