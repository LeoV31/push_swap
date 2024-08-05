/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:15:46 by lviguier          #+#    #+#             */
/*   Updated: 2024/08/05 19:04:34 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a_stack;
	t_list	**b_stack;

	if (argc < 2)
		return (1);
	if (check_args(--argc, ++argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	a_stack = (t_list **)malloc(sizeof(t_list));
	b_stack = (t_list **)malloc(sizeof(t_list));
	*a_stack = NULL;
	*b_stack = NULL;
	init_stack(a_stack, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return
	return (0);
}
