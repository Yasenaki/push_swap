/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_sortingbig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:40:11 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/24 19:58:19 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack **a, t_stack **b)
{
	int	lenght;

	lenght = stack_lenght(*a);
	if (lenght-- > 3 && !is_sorted(*a))
		push_top(a, b, 'b');
	if (lenght-- > 3 && !is_sorted(*a))
		push_top(a, b, 'b');
	while (lenght-- > 3 && !is_sorted(*a))
	{
		
	}
	sort_for_3(a);
	while (*b)
	{
		
	}
}