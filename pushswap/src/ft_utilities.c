/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:30:22 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/23 15:46:15 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit(t_swap **stack_a, t_swap **stack_b)
{
	if (stack_a && *stack_a)
		ft_stack_clear(stack_a);
	if (stack_b && *stack_b)
		ft_stack_clear(stack_b);
	write (2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

int	ft_check_dupli(int content, t_swap **stack_a)
{
	t_swap	*current;

	current = *stack_a;
	while (current != NULL)
	{
		if (current->content == content)
			return (1);
		current = current->next;
	}
	return (0);
}

void	ft_stack_clear(t_swap **stack)
{
	t_swap	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

int	ft_is_ordered(t_swap **stack_a)
{
	t_swap	*temp;

	temp = *stack_a;
	while (temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_min_val(t_swap *stack_a)
{
	t_swap	*current;
	int		min_number;
	int		pos;

	pos = 0;
	current = stack_a;
	min_number = current->content;
	while (current != NULL)
	{
		if (current->content < min_number)
		{
			min_number = current->content;
		}
		pos++;
		current = current->next;
	}
	return (min_number);
}
