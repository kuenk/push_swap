/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcuenca <dcuenca@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:44:29 by dcuenca           #+#    #+#             */
/*   Updated: 2025/11/15 15:47:13 by dcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

#include <stdio.h>

typedef struct t_swap
{
	int				content;
	int				index;
	struct t_swap	*next;
}				t_swap;

void	ft_validation(int argc, char **argv, t_swap **stack_a);
void	ft_add_node(int num, t_swap **stack_a);
void	ft_exit(void);

#endif