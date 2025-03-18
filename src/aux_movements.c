/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_movements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:07:32 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/18 17:45:03 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_top(t_stack **stack)
{
	t_stack	*buff;
	t_stack *cp;

	cp = *stack;
	if(*stack)
	{
		if((*stack)->next)
		{
			buff = *stack;//primeira pos
			cp->next = cp;//2nd pos para 1st pos
			cp = buff;//buffer preenche pos 1 com val 2
		}
	}
}
void first_to_last(t_stack **stack)
{

	t_stack *top;
	t_stack *bot;

	if(stack)
	{
		if((*stack)->next)
		{
			top = *stack;
			*stack = top ->next;
			top->next = NULL;
			bot = *stack;
			while(bot->next)
				bot = bot->next;
			bot->next = top;
		}
	}
}
void last_to_first(t_stack **stack)
{

	t_stack *newtop;
	t_stack *previous;

	if(stack)
	{
		if((*stack)->next)
		{
			newtop = *stack;
			while(newtop->next)
			{
				previous = newtop;
				newtop = newtop->next;
			}
			previous->next = NULL;
			newtop->next = *stack;
			*stack = newtop;
		}
	}
}