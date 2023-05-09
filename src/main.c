/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:21:08 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/09 19:38:03 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_stack(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while(current)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

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
	// ft_print_stack(&stack_a);
	ft_sort_stack(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
