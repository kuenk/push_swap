/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:44:29 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/11 04:39:57 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
#include <limits.h>

typedef struct t_swap
{
	int				content;
	int				index;
	struct t_swap	*next;
}				t_swap;

void	ft_validation(int argc, char **argv, t_swap **stack_a);
void	ft_add_node(int num, t_swap **stack_a);
void	ft_exit(void);
void	ft_small(t_swap **stack_a, t_swap **stack_b, int lst_size);
int	ft_min_num(t_swap *stack_a);
int	ft_is_ordered(t_swap **stack_a);
int	ft_size(t_swap *lst);
int	ft_check_dupli(int content, t_swap **stack_a);
void	ft_exit(void);
void	ft_swap(t_swap **stack, char *str);
void	ft_swap_both(t_swap **stacka, t_swap **stackb);
void	ft_push(t_swap **stacksrc, t_swap **stackdst, char *str);
void	ft_rotate(t_swap **stack, char *str);
void	ft_rotate_reverse(t_swap **stack, char *str);
int	ft_min_val(t_swap *stack_a);
void	ft_radix(t_swap **stack_a, t_swap **stack_b);
void	ft_indexer(t_swap **stack);


#endif