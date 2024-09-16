/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:15:46 by lviguier          #+#    #+#             */
/*   Updated: 2024/09/16 17:37:43 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	char	**split_argv;
	int	len;

	len = 0;
	if (argc < 2)
		return (1);
	split_argv = check_and_split(--argc, ++argv, &len);
	if (!split_argv)
	{
		write(2, "Error\n", 6);
		free_split(split_argv);
		return (1);
	}
	printf("%s\n", "TESSST");
	a_stack = malloc(sizeof(t_stack));
	b_stack = malloc(sizeof(t_stack));
	if (!a_stack || !b_stack)
	{
		free_split(split_argv);
		return (1);
	}
	//init_stacks(split_argv, a_stack, b_stack);

	free_split(split_argv);

	/**init_stack(a_stack, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return**/
	return (0);
}
