/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:14:16 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 18:53:30 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
* push a - toma el primer elemento del stack b y lo pone encima del stack a.
* No hace nada si b está vacío.
*/
void	pa(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b)
	{
		ft_lstadd_front(stack_a, *stack_b);
		ft_putstr("pa");
	}
}

/*
* push b - toma el primer elemento del stack a y lo pone encima del stack b.
* No hace nada si a está vacío.
*/
void	pb(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
	{
		ft_lstadd_front(stack_b, *stack_a);
		ft_putstr("pb");
	}
}
