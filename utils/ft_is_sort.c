/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:34:03 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 14:19:46 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_sort(t_list	**stack)
{
	t_list	*current;
	int		move;

	move = 0;
	current = *stack;
	while (current->next)
	{
		if (current->data > current->next->data)
			move++;
		current = current->next;
	}
	return (move);
}
