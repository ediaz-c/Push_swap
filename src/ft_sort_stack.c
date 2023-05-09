/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:18:10 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/09 20:04:28 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_bite_max(t_list **stack)
{
	t_list	*current;
	int		max_index;
	int		bite_max;
	
	current = *stack;
	max_index = current->index;
	bite_max = 0;
	while (current)
	{
		if (current->index > max_index)
			max_index = current->index;
		current = current->next;
	}
	while ((max_index >> bite_max) != 0)
		bite_max++;
	return(bite_max);
}

static void	ft_move_stack_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		size;
	t_list	*current;

	i = 1;
	size = ft_lstsize(*stack_a);
	while (i < size)
	{
		current = *stack_a;
		if (((current->index >> i) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
}
static void	ft_move_stack_b(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_b);
	while (size != 0)
	{
		pa(stack_a, stack_b);
		size = ft_lstsize(*stack_b);
	}
}

static void	radix(t_list **stack_a, t_list **stack_b)
{
	int		bite_max;
	int		i;
	
	i = 0;
	bite_max = ft_bite_max(stack_a);
	ft_move_stack_b(stack_a, stack_b);
	while (i < bite_max)
	{
		ft_move_stack_a(stack_a, stack_b);
		ft_move_stack_b(stack_a, stack_b);
		i++;
	}
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size > 5)
		radix(stack_a, stack_b);
}