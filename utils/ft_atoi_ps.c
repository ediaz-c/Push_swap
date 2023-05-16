/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:30:51 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/16 10:37:45 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atoi_ps(const char *str)
{
	int		i;
	int		sg;
	long	nb;

	i = 0;
	sg = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r')
		|| str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (nb * sg > INT_MAX || nb * sg < INT_MIN)
		ft_error();
	return (nb * sg);
}
