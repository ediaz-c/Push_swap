/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:21:08 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/16 10:02:20 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		return (0);
	if (av[1][0] == '\0')
		return (0);
	ft_check_args(ac, av);
	stack_a = NULL;
	stack_b = NULL;
	ft_add_stack(&stack_a, ac, av);
	if (ft_is_sort(&stack_a))
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	ft_sort_stack(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
