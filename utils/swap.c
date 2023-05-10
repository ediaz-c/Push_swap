/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:07:07 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 12:22:19 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	swap(t_list **stack)
{
	t_list	*current;
	t_list	*next;

	if (ft_lstsize(*stack) < 2)
		return (0);
	current = *stack;
	next = current->next;
	current->next = next->next;
	next->next = current;
	*stack = next;
	return(1);
}

/*
* swap a - intercambia los dos primeros elementos encima del stack a. No hace
* nada si hay uno o menos elementos.
*/
void	sa(t_list **stack_a)
{
	if (swap(stack_a))
		ft_putstr("sa");
}

/*
* swap b - intercambia los dos primeros elementos encima del stack b. No hace
* nada si hay uno o menos elementos.
*/
void	sd(t_list **stack_b)
{
	if (swap(stack_b))
		ft_putstr("sb");
}

/*
*  swap a y swap b a la vez.
*/
void	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) && swap(stack_b))
		ft_putstr("ss");
}
