/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:02:13 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 14:20:39 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	t_list	*ft_get_node_min(t_list **stack)
{
	t_list	*current;
	t_list	*min;
	int		first;

	first = 0;
	min = NULL;
	current = *stack;
	while (current)
	{
		if (current->index == -1 && (first == 0 || current->index < min->index))
		{
			first = 1;
			min = current;
		}
		current = current->next;
	}
	return (min);
}

void	ft_add_index(t_list **stack)
{
	t_list	*node_min;
	int		index;

	index = 0;
	node_min = ft_get_node_min(stack);
	while (node_min)
	{
		node_min->index = index;
		node_min = ft_get_node_min(stack);
		index++;
	}
}
