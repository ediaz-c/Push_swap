/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:31:32 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/16 09:56:47 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_get_max_index(t_list *stack, int index)
{
	int		value;
	int		pos;

	pos = 1;
	value = 0;
	while (stack)
	{
		if (index == stack->index)
			break ;
		pos++;
		stack = stack->next;
	}
	return (pos);
}

void	ft_min_num_four(t_list **stack, int index)
{
	int	pos;

	pos = ft_get_max_index(*stack, index);
	if (pos == 1)
		return ;
	else if (pos == 2)
		sa(stack);
	else if (pos == 3)
	{
		rra(stack);
		rra(stack);
	}
	else if (pos == 4)
		rra(stack);
}
