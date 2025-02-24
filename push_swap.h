/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:31:30 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/24 16:04:23 by alejaro2         ###   ########.fr       */
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
	int s_index;
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
void print_stack(t_stack *stack);

void sa(t_stack *stack);
void sb(t_stack *stack_b);
void ss(t_stack *a, t_stack *b);
void ra(t_stack *stack);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *stack);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
void push(t_stack *from, t_stack *to);
void pb(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);


void sort_three(t_stack *a);
void sort_five(t_stack *a, t_stack *b);

void rrb(t_stack *b);


void convert_numbers(char **split, int *numbers, int *new);
int *convert_init(int argc, char **argv, int count);

void ft_error(char *str, int flag);
int is_all_spaces(char *str);
int get_index(t_stack *a, int min);

t_node *create_node(int value);
t_stack *create_stack(void);
void lstadd(t_stack *stack, int value);

int find_max(t_stack *b);
int find_min(t_stack *a);
void	ft_bubblesort(int *array, int size);
int	ft_index(int n, int *array, int size);
void k_sort2(t_stack *stack_a, t_stack *stack_b, int length);
void k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
int ft_sqrt(int num);
#endif