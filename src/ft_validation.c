/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                     :+:      :+:    :+:  */
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
	if (list == NULL || list[i] == '\0')
		ft_exit();
	if ((list[i] == '+' || list[i] == '-') && (list[i + 1] != '\0'))
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

	i = 1;
	while (i != argc)
	{
		new_list = ft_split(argv[i], ' ');
		if (new_list[0] == NULL)
			ft_exit();
		n = 0;
		while (new_list[n] != NULL)
		{
			ft_sign(new_list[n]);
			if (ft_atoi_l(new_list[n]) > INT_MAX || ft_atoi_l(new_list[n]) < INT_MIN)
				ft_exit();
			ft_add_node(ft_atoi(new_list[n]), stack_a);
			free(new_list[n]);
			n++;
		}
		free(new_list);
		i++;
	}
}
