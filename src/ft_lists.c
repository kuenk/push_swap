/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:44:03 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/15 15:44:04 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_duplicates(int value, t_swap **stack_a)
{
	t_swap	*cur_elem;

	cur_elem = *stack_a;
	while (cur_elem != NULL)
	{
		if (cur_elem->content == value)
			return (1);
		cur_elem = cur_elem->next;
	}
	return (0);
}

static t_swap	*ft_new_item(int content)
{
	t_swap	*new_node;

	new_node = (t_swap *)malloc(sizeof(t_swap));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

static void	ft_add_back(t_swap **list, t_swap *new)
{
	t_swap	*cont;

	cont = *list;
	if (*list == NULL)
	{
		*list = new;
	}
	else
	{
		while (cont->next != NULL)
			cont = cont->next;
		cont->next = new;
	}
}

void	ft_free_stack(t_swap **stack)
{
	if (!stack || !(*stack))
		return ;
	ft_free_stack(&(*stack)->next);
	free(*stack);
	*stack = NULL;
}

void	ft_add_node(int num, t_swap **stack_a)
{
	t_swap	*node;
	int		flag_repeat;

	flag_repeat = ft_duplicates(num, stack_a);
	if (flag_repeat == 1)
		ft_exit();
	node = ft_new_item(num);
	ft_add_back(stack_a, node);
}
