/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:30:22 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/14 22:13:29 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_exit(void)
{
	write (2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

long	ft_atoi_l(const char *str)
{
	long	result;
	int		i;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str [i] == ' ' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if ((result * sign) < INT_MIN || (result * sign) > INT_MAX)
			return ((long)INT_MAX + 1);
		i++;
	}
	return (sign * result);
}

int	ft_check_order(t_swap **stack_a)
{
	t_swap *pre;

	pre = *stack_a;
	while(pre->next != NULL)
	{
		if (pre->content > pre->next->content)
			return (0);
		pre = pre->next;
	}
	ft_free_stack(stack_a);
	return (1);
}
