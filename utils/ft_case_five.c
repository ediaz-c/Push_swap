/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:13:59 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 22:23:13 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_get_max_index(t_list **stack)
{
	t_list	*current;
	int		max_index;

	current = *stack;
	max_index = current->index;
	while (current)
	{
		if (max_index < current->index)
			max_index = current->index;
		current = current->next;
	}
	return (max_index);
}

void    ft_get_max_num(t_list **stack)
{
	t_list	*current;
	int		max_index;

	max_index = ft_get_max_index(stack);
}
