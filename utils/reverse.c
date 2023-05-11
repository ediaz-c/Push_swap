/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:26:26 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 22:01:48 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	rotate(t_list **stack)
{
	t_list	*current;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (0);
	current = *stack;
	tail = ft_lstlast(*stack);
	while (current->next->next)
		current = current->next;
	current->next = NULL;
	tail->next = *stack;
	*stack = tail;
	return (1);
}

/*
* reverse rotate a - desplaza hacia abajo todos los elementos del stack a una
* posición, de forma que el último elemento se convierte en el primero. 
*/
void	rra(t_list **stack_a)
{
	if (rotate(stack_a))
		ft_putstr("rra");
}

/*
* reverse rotate b - desplaza hacia abajo todos los elementos del stack b una
* posición, de forma que el último elemento se convierte en el primero.
*/
void	rrb(t_list **stack_b)
{
	if (rotate(stack_b))
		ft_putstr("rrb");
}

/*
* reverse rotate a y reverse rotate b - desplaza al mismo tiempo todos
* los elementos del stack a y del stack b una posición hacia abajo, de forma que
* el último elemento se convierte en el primero.
*/
void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) && rotate(stack_b))
		ft_putstr("rrr");
}
