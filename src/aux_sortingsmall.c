/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_sortingsmall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:40:49 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/24 19:50:51 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
size_t	stack_lenght(t_stack *stack)
{
	size_t	cnt;

	if (!stack)
		return (0);
	cnt = 0;
	while (stack)
	{
		stack = stack->next;
		cnt++;
	}
	return (cnt);
}

void sort_small(t_stack **a, int cnt)
{
	t_stack	*current;

	if (cnt == 2)
	{
		cnt = *a;
		if (current->nb > current->next->nb)
			swap_top(a, 'a', 0);
	}
	if (cnt == 3)
		sort3(a);
}
void sort3(t_stack **a)
{
	t_stack *buffer;

	buffer = *a;
	if (buffer->nb > buffer->next->nb
		&& buffer->next->nb > buffer->next->next->nb)
		aux_sort3(a);
	else if (buffer->nb > buffer->next->nb
		&& buffer->next->nb < buffer->next->next->nb
		&& buffer->nb < buffer->next->next->nb)
		swap_top(a, 'a', 0);
	else if (buffer->nb < buffer->next->nb
		&& buffer->next->nb > buffer->next->next->nb
		&& buffer->nb < buffer->next->next->nb)
	{
		swap_top(a, 'a', 0);
		first_to_last(a, 'a', 0);
	}
	else if (buffer->nb < buffer->next->nb
		&& buffer->next->nb > buffer->next->next->nb)
		last_to_first(a, 'a', 0);
	else if (buffer->nb > buffer->next->nb
		&& buffer->next->nb < buffer->next->next->nb)
		rotate_stack(a, 'a', 0);
}
static void	aux_sort3(t_stack **a)
{
	swap_top(a, 'a', 0);
	last_to_first(a, 'a', 0);
}