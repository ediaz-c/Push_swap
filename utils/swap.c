/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:07:07 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/09 19:59:36 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_list **stack)
{
	int		size;
	t_list	*current;
	t_list	*next;

	size = ft_lstsize(*stack);
	if (size > 1)
	{
		current = *stack;
		next = current->next;
		current->next = next->next;
		next->next = current;
		*stack = next;
	}
}

/*
* swap a - intercambia los dos primeros elementos encima del stack a. No hace
* nada si hay uno o menos elementos.
*/
void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putstr("sa\n");
}

/*
* swap b - intercambia los dos primeros elementos encima del stack b. No hace
* nada si hay uno o menos elementos.
*/
void	sd(t_list **stack_b)
{
	swap(stack_b);
	ft_putstr("sb\n");
}

/*
*  swap a y swap b a la vez.
*/
void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
}
