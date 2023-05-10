/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:22:51 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 12:23:44 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	rotate(t_list **stack)
{
	t_list	*first_node;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (0);
	first_node = *stack;
	tail = ft_lstlast(*stack);
	*stack = first_node->next;
	tail->next = first_node;
	first_node->next = NULL;
	return (1);
}

/*
* rotate a - desplaza hacia arriba todos los elementos del stack a una posición,
* de forma que el primer elemento se convierte en el último.
*/
void	ra(t_list **stack_a)
{
	if (rotate(stack_a))
		ft_putstr("ra");
}

/*
* rotate b - desplaza hacia arriba todos los elementos del stack b una posición,
* de forma que el primer elemento se convierte en el último.
*/
void	rb(t_list **stack_b)
{
	if (rotate(stack_b))
		ft_putstr("rb");
}

/*
* rotate a y rotate b - desplaza al mismo tiempo todos los elementos del stack
* a y del stack b una posición hacia arriba, de forma que el primer elemento se
* convierte en el último.
*/
void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr");
}
