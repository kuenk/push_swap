/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:46:56 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/15 15:43:28 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct t_swap
{
	int				content;
	int				index;
	struct t_swap	*next;
}				t_swap;

void	ft_validation(int argc, char **argv, t_swap **stack_a);
void	ft_add_node(int num, t_swap **stack_a);
long	ft_atoi_l(const char *str);
void	ft_free_stack(t_swap **stack);
int		ft_duplicates(int value, t_swap **stack_a);
int		ft_check_order(t_swap **stack_a);
void	ft_sort(t_swap **stack_a);
void	ft_swap(t_swap **stack, char *rslt);
void	ft_swap_ab(t_swap **stack_a, t_swap **stack_b);
void	ft_exit(void);

#endif
