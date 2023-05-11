/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:18:10 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/11 09:43:51 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_three_numbers(t_list **stack)
{
	int	caso;

	caso = 0;
	caso = ft_case_three_numbers(stack);
	if (caso == 1)
		sa(stack);
	else if (caso == 2)
	{
		sa(stack);
		rra(stack);
	}
	else if (caso == 3)
		ra(stack);
	else if (caso == 4)
	{
		sa(stack);
		ra(stack);
	}
	else if (caso == 5)
		rra(stack);
}

static void	ft_five_numbers(t_list **stack_a, t_list **stack_b)
{
	t_list	*max_num;
	int		i;

	i = -1;
	while (++i < 2)
	{
		ft_get_max_num();
		pb(stack_a, stack_b);
	}
	//TODO
}


static void	radix(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		size;
	t_list	*current;

	i = 0;
	current = *stack_a;
	size = ft_lstsize(current);
	while (!ft_is_sort(stack_a))
	{
		j = 0;
		while (j++ < size)
		{
		current = *stack_a;
		if (((current->index >> i) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
		pa(stack_a, stack_b);
		i++;
	}
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size > 5)
		radix(stack_a, stack_b);
	else if (size == 2)
		sa(stack_a);
	else if (size == 3)
		ft_three_numbers(stack_a);
	else if (size == 5)
		ft_five_numbers(stack_a, stack_b);
}
