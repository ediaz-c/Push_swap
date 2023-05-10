/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:30:59 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/10 12:38:09 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_case_three_numbers(t_list **stack)
{
	int	data1;
	int	data2;
	int	data3;

	data1 = (*stack)->data;
	data2 = (*stack)->next->data;
	data3 = (*stack)->next->next->data;
	if (data1 > data2 && data3 > data1)
		return (1);
	else if (data1 > data2 && data2 > data3)
		return (2);
	else if (data1 > data2 && data1 > data3)
		return (3);
	else if (data2 > data3 && data3 > data1)
		return (4);
	else
		return (5);	
}
