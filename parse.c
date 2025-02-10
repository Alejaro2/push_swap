/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:41:21 by alejaro2          #+#    #+#             */
/*   Updated: 2025/02/10 15:44:11 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	is_valid_char(char c, int position)
{
	if (position == 0 && (ft_isdigit(c) || c == ' ' || c == '+' || c == '-'))
		return (1);
	else if (ft_isdigit(c) || c == ' ')
		return (1);
	return (0);
}

int	valid_limits(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	if (len == 0)
		return (0);
	if (str[i] == '-')
	{
		i++;
		while (str[i] == '0')
			i++;
		if ((len - i) > 10 || ((len - i) == 10 && ft_strncmp(str + i,
					"2147483648", 10) > 0))
			return (0);
	}
	else
	{
		while (str[i] == '0')
			i++;
		if ((len - i) > 10 || ((len - i) == 10 && ft_strncmp(str + i,
					"2147483647", 10) > 0))
			return (0);
	}
	return (1);
}

void	ft_error(char *str, int flag)
{
	ft_putstr(str);
	exit(flag);
}

int	valid_digits(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	**split;

	i = 1;
	count = 0;
	while (i < argc)
	{
		if (is_all_spaces(argv[i]))
			ft_error("error", 1);
		if (argv[i][0] == '\0')
			ft_error("error", 1);
		split = ft_split(argv[i], ' ');
		if (!split)
			ft_error("error", 1);
		j = 0;
		while (split[j])
		{
			validate(split[j]);
			count++;
			j++;
		}
		ft_free_mem(split);
		i++;
	}
	return (count);
}

void	validate(char *split_str)
{
	int	i;

	i = 0;
	while (split_str[i])
	{
		if (!is_valid_char(split_str[i], i))
			ft_error("error", 1);
		i++;
	}
	if (!valid_limits(split_str))
		ft_error("error", 1);
}

int	is_sorted(int *numbers, int count)
{
	int	i;

	i = 0;
	while (i < (count - 1))
	{
		if (numbers[i] > numbers[i + 1])
			return (0);
		i++;
	}
	return (1);
}
