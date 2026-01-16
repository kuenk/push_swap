/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 04:24:29 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/11 05:59:56 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
void	ft_indexer(t_swap **stack)
{
	int		index;
	t_swap	*temp;
	t_swap	*aux;

	temp = (*stack);
	while (temp != NULL)
	{
        index = 0;
		aux = (*stack);
		while (aux)
		{
			if (temp->content > aux->content)
                index++;
			aux = aux->next;
		}
        temp->index = index;
		temp = temp->next;
	}
}

static int	ft_bitter(int size)
{
	int	i;

	i = 0;
	while ((size - 1) >> i != 0)
	{
		i++;
	}
	return (i);
}

void	ft_radix(t_swap **stack_a, t_swap **stack_b)
{	
    int i;
	int	j;
	int	size;
    int max_bits;

    size = ft_size(*stack_a);
    max_bits = ft_bitter(size);
    i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				ft_push(stack_a, stack_b, "pb\n");
			else
				ft_rotate(stack_a, "ra\n");
			j++;
		}
		while (ft_size(*stack_b) != 0)
			ft_push(stack_b, stack_a, "pa\n");
        i++;
	}
}
