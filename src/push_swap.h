/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:42:38 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/18 17:46:07 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int		nb;
	int		index;
	int 	push_cost;
	bool	med;
	bool	cheap;
	struct s_stack	*next;
	struct s_stack	*t_index;
}	t_stack;

//aux_ps.c
void	push();
void	rotate();
void	double_rotate();
void	check_ps(t_stack **a, t_stack **b);

//aux_stacks.c
void inicialize_s(t_stack **a, t_stack **b);

//aux_verify.c
bool is_num(char *str);
int	is_valid(t_stack **a, char **argv);

//aux_arg_manipulation.c
void	add_end(t_stack *a, t_stack *x);

//push_aux.c
int start_push_swap(t_stack **a, t_stack **b);

//aux_movements
void first_to_last(t_stack **stack);
void swap_top(t_stack **stack);
void last_to_first(t_stack **stack);


#endif
