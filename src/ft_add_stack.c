/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:33:45 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 14:20:49 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_add_stack(t_list **stack, int num_args, char **args)
{
	t_list	*node;
	char	**list;
	int		i;

	i = 0;
	if (num_args == 2)
		list = ft_split(args[1], ' ');
	else
	{
		i = 1;
		list = args;
	}
	while (list[i])
	{
		node = ft_lstnew(ft_atoi(list[i]));
		ft_lstadd_back(stack, node);
		i++;
	}
	if (num_args == 2)
		ft_free(list);
}
