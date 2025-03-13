/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:04:18 by jopires-          #+#    #+#             */
/*   Updated: 2025/03/13 22:46:33 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**str_split;

	inicialize_s(&a, &b);
	str_split = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2)
	{
		str_split = ft_split(argv[1], ' ');
		if(!str_split || !argv[1])
			return (free(str_split), 1);
		argv = str_split;
	}
	else
		argv = &argv[1];
	if(is_valid(&a, argv))
	//parei aqui
}
