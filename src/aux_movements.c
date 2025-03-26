/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_movements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:07:32 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/24 18:03:13 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
void swap_top(t_stack **stack, int p_stack, int is_write)
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
	if (!is_write)
		ft_printf("s%c\n", p_stack);
}
void first_to_last(t_stack **stack, int p_stack, int is_write)
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
	if (!is_write)
		ft_printf("r%c\n", p_stack);
}
void last_to_first(t_stack **stack, int p_stack, int is_write)
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
		if (!is_write)
		ft_printf("rr%c\n", p_stack);
}
void	push_top(t_stack **in, t_stack **out, int p_stack)
{
	t_stack	*temp;

	if (*in)
	{
		temp = *in;
		*in = (*in)->next;
		temp->next = *out;
		*out = temp;
	}
	ft_printf("p%c\n", p_stack);
}