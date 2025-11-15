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
#include "libft.h"

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
	}
	cont->next = new;
}

static t_swap	*ft_new_list(int content)
{
	t_swap	*new_node;

	new_node = (t_swap *)malloc(sizeof(t_swap));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_add_node(int num, t_swap **stack_a)
{
	t_swap	*node;
	printf("entro a node");
	node = ft_new_list(num);
	ft_add_back(stack_a, node);
}
