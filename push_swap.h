/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:31:30 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/18 11:06:41 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int value;
	struct s_node *next;
} t_node;

typedef struct s_stack {
	t_node *top;
	int size;
} t_stack;


int is_valid_char(char c, int position);
int valid_digits(int argc, char **argv);
int valid_limits(char *str);
void validate(char *split_str);
void duplicate(int *numbers, int count);
int is_sorted(int *numbers, int count);

void ft_free_mem(char **array);
int *save_mem(int count);
void free_stack(t_stack *stack);

void convert_numbers(char **split, int *numbers, int *new);
int *convert_init(int argc, char **argv, int count);

void ft_error(char *str, int flag);
int is_all_spaces(char *str);

t_node *create_node(int value);
t_stack *create_stack(void);
void lstadd(t_stack *stack, int value);

#endif