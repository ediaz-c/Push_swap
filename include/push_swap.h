/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:17:35 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/09 19:57:07 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

// Errores
void	ft_error(void);
void	vabien(void);

// UTILS
void	ft_check_args(int ac, char **args);
void	ft_free(char **stack);
void	ft_add_index(t_list **stack);
int		ft_is_sort(t_list	**stack);
void	ft_putstr(char *str);
// MOVEMENTS

// SRC
void	ft_add_stack(t_list **stack, int num_args, char **args);
void	ft_sort_stack(t_list **stack_a, t_list **stack_b);

// lst
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int data);
int		ft_lstsize(t_list *lst);

// MOVEMENTS
void	sa(t_list **stack_a);
void	sd(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
#endif