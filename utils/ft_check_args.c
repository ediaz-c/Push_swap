/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:53:46 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 18:05:14 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_is_rep(char **args, int index, int current)
{
	index ++;
	while (args[index])
	{
		if (current == ft_atoi(args[index]))
			return (0);
		index++;
	}
	return (1);
}

static int	ft_is_number(char *num)
{
	long	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int ac, char **args)
{
	int		i;
	int		current;
	char	**stack;

	i = 0;
	if (ac == 2)
		stack = ft_split(args[1], ' ');
	else
	{
		i = 1;
		stack = args;
	}
	while (stack[i])
	{
		current = ft_atoi(stack[i]);
		if (ft_is_number(stack[i]) == 0)
			ft_error();
		else if (ft_is_rep(stack, i, current) == 0)
			ft_error();
		else if (current > INT_MAX && current < INT_MIN)
			ft_error();
		i++;
	}
	if (ac == 2)
		ft_free(stack);
}
