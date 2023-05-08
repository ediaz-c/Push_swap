/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:37:34 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 13:40:58 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*node;
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	if (!tmp)
		return ;
	while (tmp)
	{
		node = tmp->next;
		ft_lstdelone(tmp);
		tmp = node;
	}
	*lst = NULL;
}
