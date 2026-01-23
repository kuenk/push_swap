/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:46:56 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/23 17:49:28 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
	ft_exit(NULL, NULL);
}

static void	ft_sign(char *list, t_swap **stack_a, t_swap **stack_b)
{
	int	i;

	i = 0;
	if (list == NULL || list[i] == '\0')
		ft_exit(stack_a, stack_b);
	if (list[i] == '+' || list[i] == '-')
		i++;
	if (!ft_isdigit(list[i]))
		ft_exit(stack_a, stack_b);
	while (list[i] != '\0')
	{
		if (ft_isdigit(list[i]) == 0)
			ft_exit(stack_a, stack_b);
		i++;
	}
}

void	ft_validation(int argc, char **argv, t_swap **stack_a)
{
	int		i;
	int		n;
	char	**new_list;
	long	temp;

	i = 0;
	while (++i != argc)
	{
		new_list = ft_split(argv[i], ' ');
		n = -1;
		if (new_list[0] == NULL)
			ft_free_split(new_list);
		while (new_list[++n] != NULL)
		{
			ft_sign(new_list[n], stack_a, NULL);
			temp = ft_atoi_l(new_list[n]);
			if (temp > INT_MAX || temp < INT_MIN)
				ft_exit(stack_a, NULL);
			ft_add_node((int)temp, stack_a);
			free(new_list[n]);
		}
		free(new_list);
	}
}

int	main(int argc, char **argv)
{
	t_swap	*stack_a;
	t_swap	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		ft_validation(argc, argv, &stack_a);
		if (ft_is_ordered(&stack_a) == 1)
		{
			ft_stack_clear(&stack_a);
			return (0);
		}
		if (ft_size(stack_a) <= 5)
			ft_small(&stack_a, &stack_b, ft_size(stack_a));
		else
		{
			ft_indexer(&stack_a);
			ft_radix(&stack_a, &stack_b);
		}
	}
	ft_stack_clear(&stack_a);
	ft_stack_clear(&stack_b);
	return (0);
}
