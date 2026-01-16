/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opers_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:42:06 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/11 02:57:33 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_swap **stack, char *str)
{
	int	temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = temp;
	}
	if (str != NULL)
		write(1, str, 3);
}

void	ft_swap_both(t_swap **stacka, t_swap **stackb)
{
	int	temp;

	if (*stacka != NULL && (*stacka)->next != NULL)
	{
		temp = (*stacka)->content;
		(*stacka)->content = (*stacka)->next->content;
		(*stacka)->next->content = temp;
	}

	if (*stackb != NULL && (*stackb)->next != NULL)
	{
		temp = (*stackb)->content;
		(*stackb)->content = (*stackb)->next->content;
		(*stackb)->next->content = temp;
		write(1, "ss\n", 3);
	} 
}

void	ft_push(t_swap **stacksrc, t_swap **stackdst, char *str)
{
	t_swap	*temp;

	if(*stacksrc != NULL)
	{
		temp = *stacksrc;
		*stacksrc = (*stacksrc)->next;
		temp->next = *stackdst;
		*stackdst = temp;
		
		write(1, str, 3);
	}
}

void	ft_rotate(t_swap **stack, char *str)
{
	t_swap	*temp;
	t_swap	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		temp->next = NULL;
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	if (str != NULL)
		write(1, str, 3);
}

void	ft_rotate_reverse(t_swap **stack, char *str)
{
	t_swap	*temp;
	t_swap	*last;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;
		last = NULL;
		*stack = (*stack)->next;
		while (last->next != NULL)
		{
			last = temp;
			temp = temp->next;
		}
		temp->next = *stack;
		*stack = temp;
		last->next = NULL;
	}
	if (str != NULL)
		write(1, str, 4);
}