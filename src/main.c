/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:21:08 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 18:04:33 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		ft_error();
	ft_check_args(ac, av);
	stack_a = NULL;
	stack_b = NULL;
	ft_add_stack(&stack_a, ac, av);
	if (ft_is_sort(&stack_a) == 0)
	{
		printf("sort");
		free(stack_a);
		free(stack_b);
		return (0);
	}
	// ft_sort_stack();
	free(stack_a);
	free(stack_b);
	return (0);
}
