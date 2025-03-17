/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_aux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:04:13 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/17 19:43:52 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int start_push_swap(t_stack **a, t_stack **b)
{
	int		cnt_args;
	t_stack *counting;
	cnt_args = 0;
	counting = *a;
	while(counting ->next != NULL)
	{
		counting ->next;
		cnt_args++;
	}
	if(counting < 3)
	{
		//small stack
		sort_small(&a,&b);
	}
	else
	{
		//big stack
		sort_big(&a,&b);
	}
}
