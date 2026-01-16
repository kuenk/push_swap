/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:46:56 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/11 04:48:55 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "libft.h"

static void	ft_sign(char *list)
{
	int	i;

	i = 0;
	if (list == NULL || list[i] == '\0')
		ft_exit();
	if (list[i] == '+' || list[i] == '-')
		i++;
	while (list[i] != '\0')
	{
		if (ft_isdigit(list[i]) == 0)
			ft_exit();
		i++;
	}
}

void	ft_validation(int argc, char **argv, t_swap **stack_a)
{
	int		i;
	int		n;
	char	**new_list;

	i = 0;
	while (++i != argc)
	{
		new_list = ft_split(argv[i], ' ');
		n = -1;
		if (new_list[0] == NULL)
			ft_exit();
		while (new_list[++n] != NULL)
		{
			ft_sign(new_list[n]);
			ft_add_node(ft_atoi(new_list[n]), stack_a);
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
			return(0);
		if (ft_size(stack_a) <= 5)
		{
			ft_small(&stack_a, &stack_b, ft_size(stack_a));
		}
		else
		{
			ft_indexer(&stack_a);
			ft_radix(&stack_a, &stack_b);
		}
	}
	
	return (0);
}
