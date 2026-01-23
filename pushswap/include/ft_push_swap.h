/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:44:29 by dcuenca           #+#    #+#             */
/*   Updated: 2026/01/23 17:51:08 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct t_swap
{
	int				content;
	int				index;
	struct t_swap	*next;
}				t_swap;

void	ft_exit(t_swap **stack_a, t_swap **stack_b);
void	ft_stack_clear(t_swap **stack);
void	ft_small(t_swap **stack_a, t_swap **stack_b, int lst_size);
int		ft_min_num(t_swap *stack_a);
int		ft_is_ordered(t_swap **stack_a);
int		ft_size(t_swap *lst);
int		ft_check_dupli(int content, t_swap **stack_a);
void	ft_swap(t_swap **stack, char *str);
void	ft_swap_both(t_swap **stacka, t_swap **stackb);
void	ft_push(t_swap **stacksrc, t_swap **stackdst, char *str);
void	ft_rotate(t_swap **stack, char *str);
void	ft_rotate_reverse(t_swap **stack, char *str);
int		ft_min_val(t_swap *stack_a);
void	ft_radix(t_swap **stack_a, t_swap **stack_b);
void	ft_indexer(t_swap **stack);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int n);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
long	ft_atoi_l(const char *str);
void	ft_add_node(int num, t_swap **stack_a);

#endif