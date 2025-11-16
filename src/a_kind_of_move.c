/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_kind_of_move.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:44:03 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/15 15:44:04 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_push_swap.h>

void	ft_swap(t_swap **stack, char *rslt)
{
	int	aux;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		aux = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = aux;
		write(1, rslt, 3);
	}
}

void	ft_swap_ab(t_swap **stack_a, t_swap **stack_b)
{

	ft_swap(stack_a, NULL);
	ft_swap(stack_b, NULL);
	write(1, "ss\n", 3);
}