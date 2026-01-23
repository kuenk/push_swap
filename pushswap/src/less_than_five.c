/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:00:44 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/23 17:50:09 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_position(t_swap *stack, int min_val)
{
	int		pos;
	t_swap	*current;

	current = stack;
	pos = 0;
	while (current != NULL)
	{
		if (current->content == min_val)
			return (pos);
		current = current->next;
		pos++;
	}
	return (-1);
}

static void	ft_three(t_swap **stack_a)
{
	if (((*stack_a)->content > (*stack_a)->next->content)
		&& ((*stack_a)->content > (*stack_a)->next->next->content))
	{
		ft_rotate(stack_a, "ra\n");
	}
	else if ((*stack_a)->next->content > (*stack_a)->next->next->content
		&& ((*stack_a)->next->content > (*stack_a)->content))
	{
		ft_rotate_reverse(stack_a, "rra\n");
	}
	if ((*stack_a)->content > (*stack_a)->next->content)
	{
		ft_swap(stack_a, "sa\n");
	}
}

static void	ft_five(t_swap **stack_a, t_swap **stack_b)
{
	int	min_val;
	int	pos;

	while (ft_size(*stack_a) > 3)
	{
		min_val = (ft_min_val(*stack_a));
		pos = ft_position(*stack_a, min_val);
		while (pos != 0)
		{
			if (pos <= ft_size(*stack_a) / 2)
				ft_rotate(stack_a, "ra\n");
			else
				ft_rotate_reverse(stack_a, "rra\n");
			pos = ft_position(*stack_a, min_val);
		}
		ft_push (stack_a, stack_b, "pb\n");
	}
	ft_three (stack_a);
	while (ft_size(*stack_b) > 0)
		ft_push (stack_b, stack_a, "pa\n");
}

void	ft_small(t_swap **stack_a, t_swap **stack_b, int lst_size)
{
	if (lst_size == 2)
		ft_swap(stack_a, "sa\n");
	else if (lst_size == 3)
		ft_three(stack_a);
	else if (lst_size > 3)
		ft_five(stack_a, stack_b);
}
