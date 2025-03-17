/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_movements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:07:32 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/17 20:10:20 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_top(t_stack **stack)
{
	int buff;

	if(*stack)
	{
		if((*stack)->next)
		{
			buff = (*stack)->nb;//primeira pos
			(*stack)->nb = (*stack)->next->nb;//2nd pos para 1st pos
			(*stack)->next->nb = buff;//buffer preenche pos 1 com val 2
		}
	}
}
void last_to_first(t_stack **stack)
{
	t_stack *head;
	t_stack *bottom;

	if(*stack)
	{
		if((*stack)->next)
		{
			head = (*stack)->nb;
			*stack = head->next;
			while((*stack)->next != NULL)
			{
				bottom = (*stack)->next->nb;
			}
			bottom->nb = head;
		}
	}
}