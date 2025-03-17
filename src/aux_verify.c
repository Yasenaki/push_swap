/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_verify.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:13:33 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/17 16:30:40 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool is_num(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i == 0)
		{
			if ((str[i] != '-' && str[i] != '+' && (str[i] < '0' || str[i] > '9')))
				return (0);
		}
		else
			if (str[i] < '0' || str[i] > '9')
				return (0);
		i++;
	}
	return (1);
}

static int	overflow_check(char *x)
{
	long	nb;

	nb = 0;
	nb = ft_atoi(x);
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	return (1);
}
static int	create_node(t_stack **a, char **argv, size_t idx)
{
	t_stack *new_node;
	while (argv[idx++])
	{
		new_node=malloc(sizeof(size_t));
		if(!new_node)
			return (0);
		if(!overflow_check(argv[idx]))
			return (free(new_node), 0);
		new_node->nb = (int)ft_atoi(argv[idx]);
		new_node->next = NULL;
		new_node->cheap = false;
		if(*a == NULL)
			*a = new_node;
		else
			add_end(a, new_node);
	}
	return (1);	
}

static int	is_dup(t_stack **a, char **str)
{
	//correr a stack a e verificar se ha duplicados
	int cnt;
	int buffer;
	t_stack *stack;
	int idx;

	while(*a)
	{
		idx=-1;
		while(str[++idx])
		{
			while (stack)
			{
				if(stack->nb != buffer && cnt==0)
					cnt = 1;
				if(stack->nb == buffer && cnt==1)
					return (0);
				stack = stack->next;
			}
		}
		a = &(*a)->next;
	}
	return(1);
}

int	is_valid(t_stack **a, char **argv)
{
	if (is_num(argv))
	{
		if (!create_node(a, argv, -1))
			return (ft_printf("Error \n"), false);
	}
	else
		return (ft_printf("Error \n"), false);
	if (!is_dup(a, argv))
		return (ft_printf("Error \n"), false);
	return (1);
}
