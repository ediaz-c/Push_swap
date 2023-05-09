/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:25:57 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 18:06:00 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	vabien(void)
{
	printf("VA BIEN\n");
}

void	ft_error(void)
{
	ft_putstr_fd("Error", 1);
	exit (0);
}
