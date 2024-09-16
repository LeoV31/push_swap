/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:12:01 by lviguier          #+#    #+#             */
/*   Updated: 2024/09/16 17:20:38 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	value;
	int	rank;
	struct	s_stack	*next;
	struct	s_stack *prev;
}	t_stack;

int	ft_atoi(const char *str);
int	check_args(int argc, char **argv);
int	ft_strcmp(const char *s1, const char *s2);
int	is_dup(char *s1, char **s2, int i);
int	is_int(const char *str);
int	is_number(const char *str);
char	**check_and_split(int argc, char **argv, int *len);
char	*merge_args(int argc, char **argv);
void	free_split(char **split);

#endif
