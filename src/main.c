/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:21:08 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 14:27:21 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		ft_error("No se han introducido argumentos");
	ft_check_args(ac, av);
	stack_a = (t_list **)malloc (sizeof(t_list));
	stack_b = (t_list **)malloc (sizeof(t_list));
	if (stack_a == NULL || stack_b == NULL)
		ft_error("Memoria no alocada");
	*stack_a = NULL;
	*stack_b = NULL;
	ft_add_stack(stack_a, ac, av);
	if (ft_is_sort(stack_a) == 0)
	{
		
		free(stack_a);
		free(stack_b);
		return (0);
	}
	ft_sort_stack();
	free(stack_a);
	free(stack_b);
	return (0);
}
