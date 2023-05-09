/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:07:07 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 18:34:43 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
* swap a - intercambia los dos primeros elementos encima del stack a. No hace
* nada si hay uno o menos elementos.
*/
void	sa(t_list **stack_a)
{
	int		size;
	t_list	*current;
	t_list	*next;

	size = ft_lstsize(*stack_a);
	if (size > 1)
	{
		current = *stack_a;
		next = current->next;
		current->next = next->next;
		next->next = current;
		*stack_a = next;
	}
}

/*
* swap b - intercambia los dos primeros elementos encima del stack b. No hace
* nada si hay uno o menos elementos.
*/
void	sd(t_list **stack_b)
{
	int		size;
	t_list	*current;
	t_list	*next;

	size = ft_lstsize(*stack_b);
	if (size > 1)
	{
		current = *stack_b;
		next = current->next;
		current->next = next->next;
		next->next = current;
		*stack_b = next;
	}
}

/*
*  swap a y swap b a la vez.
*/
void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
