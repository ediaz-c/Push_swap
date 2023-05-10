/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:14:16 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 12:22:32 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	push(t_list **to, t_list **from)
{
	t_list	*current_to;
	t_list	*current_from;
	t_list	*tmp;
	
	if (ft_lstsize(*from) == 0)
		return (0);
	current_to = *to;
	current_from = *from;
	tmp = current_from;
	current_from = current_from->next;
	*from = current_from;
	if (!current_to)
	{
		current_to = tmp;
		current_to->next = NULL;
		*to = current_to;
	}
	else
	{
		tmp->next = current_to;
		*to = tmp;
	}
	return (1);
}

/*
* push a - toma el primer elemento del stack b y lo pone encima del stack a.
* No hace nada si b está vacío.
*/
void	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b))
		ft_putstr("pa");
}

/*
* push b - toma el primer elemento del stack a y lo pone encima del stack b.
* No hace nada si a está vacío.
*/
void	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a))
		ft_putstr("pb");
}
