/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:46:56 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/15 15:43:28 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "libft.h"

static void	ft_sign(char *list)
{
	int	i;

	i = 0;
	if (list[i] == '+' || list[i] == '-')
		i++;
	if (list[0] == '\0')
		ft_exit();
	while (list[i] != '\0')
	{
		if (ft_isdigit(list[i]) != '0')
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
	while (i != argc)
	{
		new_list = ft_split(argv[i], ' ');
		if (new_list[0] == NULL)
			ft_exit();
		n = 0;
		while (new_list[n] != NULL)
		{
			ft_sign(new_list[n]);
			ft_add_node(ft_atoi(new_list[n]), stack_a);
			n++;
			free(new_list[n]);
		}
		free(new_list);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_swap	*stack_a;
//	t_list	*stack_b;

	stack_a = NULL;
//	stack_b = NULL;
	if (argc > 1)
		ft_validation(argc, argv, &stack_a);
	return (1);
}
