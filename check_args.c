/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:07:34 by lviguier          #+#    #+#             */
/*   Updated: 2024/09/16 17:36:43 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*merge_args(int argc, char **argv)
{
	char	*merged_argv;
	int	len;
	int	i;

	i = -1;
	while (++i < argc)
		len += ft_strlen(argv[i]) + 1;
	merged_argv = malloc(len * sizeof(char));
	if (!merged_argv)
		return (NULL);
	merged_argv[0] = '\0';
	i = -1;
	while (++i < argc)
	{
		ft_strlcat(merged_argv, argv[i], ft_strlen(merged_argv) + ft_strlen(argv[i]) + 1);
		if (i < argc - 1)
			ft_strlcat(merged_argv, " ", ft_strlen(merged_argv) + 2);
	}
	return (merged_argv);
}

char	**check_and_split(int argc, char **argv, int *len)
{
	int	i;
	char	**split_argv;
	char	*merged_args;

	i = -1;
	merged_args = merge_args(argc, argv);
	if (!merged_args)
		return (NULL);
	split_argv = ft_split(merged_args, ' ');
	free(merged_args);
	if (!split_argv)
		return (NULL);
	while (split_argv[++i])
	{
		if (!is_number(split_argv[i]) || !is_int(split_argv[i])
			|| is_dup(split_argv[i], split_argv, i + 1))
		{
			free_split(split_argv);
			write(2, "Error\n", 6);
			return (NULL);
		}
		(*len)++;
	}
	return (split_argv);
}

void	free_split(char **split)
{
	int	i;
	
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	is_int(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (sign * result > INT_MAX || sign * result < INT_MIN)
			return (0);
		str++;
	}
	return (1);
}

int	is_number(const char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	is_dup(char *s1, char **s2, int i)
{
	while (s2[i])
	{
		if (ft_strcmp(s1, s2[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
