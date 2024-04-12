/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:01:43 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:10:04 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_value(t_list *lst, int node)
{
	int			i;
	static int	value;
	t_list		*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		if (i == node)
		{
			
			tmp->data = value;
			value++;
			tmp->datacpy = LONG_MAX;
		}
		i++;
		tmp = tmp->next;
	}
}

static void	set_index(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->index = i;
		i++;
		lst = lst->next;
	}
}

static long	difference(t_list **lst)
{
	long	dif;
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		dif = MAX - tmp->datacpy;
		if (dif != LONG_MAX)
			break ;
		tmp = tmp->next;
	}
	return (dif);
}

void	lst_simplify(t_list **lst)
{
	int		i;
	int		node;
	long	dif;
	t_list	*actual;

	i = 0;
	set_index(*lst);
	while (i < ft_lstsize(*lst))
	{
			actual = *lst;
			dif = difference(lst);
			node = actual->index;
		while (actual)
		{
			if (actual->next != NULL && (MAX - actual->next->datacpy) > dif)
			{
				dif = MAX - actual->next->datacpy;
				node = actual->next->index;
			}
			actual = actual->next;
		}	
		set_value(*lst, node);
		i++;
	}
}
