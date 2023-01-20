/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:13:53 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/16 18:04:39 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_dup(int ac, char **av, int a, int b)
{
	int	i;
	int	j;

	i = a;
	j = b;
	while (i < ac)
	{
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
				j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	limits(int ac, char **av, int a)
{
	int	i;

	i = a;
	while (i < ac)
	{
		if (ft_strlen(av[i]) == 0)
			return (0);
		if (ft_atoi(av[i]) >= INT_MIN && ft_atoi(av[i]) <= INT_MAX)
			i++;
		else
			return (0);
	}
	return (1);
}

static int	minus(int ac, char **av, int a)
{
	int	i;
	int	j;

	i = a;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			if ((av[i][j] == '-' && ft_isdigit(av[i][j - 1]))
				|| (av[i][j] == '-' && !ft_isdigit(av[i][j + 1])))
				return (0);
			if ((av[i][j] == '+' && ft_isdigit(av[i][j - 1]))
				|| (av[i][j] == '+' && !ft_isdigit(av[i][j + 1])))
				return (0);
			if ((ft_isdigit(av[i][j])) || (av[i][j] == '-')
					|| (av[i][j] == '+'))
				j++;
			else
				return (0);
		}
		j = 0;
		i++;
	}
	return (1);
}

int	parsing(int ac, char **av, int a, int b)
{
	if (!is_dup(ac, av, a, b))
		return (0);
	if (!limits(ac, av, a))
		return (0);
	if (!minus(ac, av, a))
		return (0);
	return (1);
}
