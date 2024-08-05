/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:12:01 by lviguier          #+#    #+#             */
/*   Updated: 2024/08/05 18:46:51 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

int	ft_atoi(const char *str);
int	check_args(int argc, char **argv);
int	ft_strcmp(const char *s1, const char *s2);
int	is_dup(char *s1, char **s2, int argc, int i);
int	is_int(const char *str);
int	is_number(const char *str);

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

#endif
