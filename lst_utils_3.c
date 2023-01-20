/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:04:50 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:51:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_is_sorted(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->next != NULL && tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_list	*ft_lstcpy(t_list **lst)
{
	t_list	*lstcpy;
	t_list	*tmp;
	t_list	*new;

	tmp = *lst;
	while (tmp)
	{
		new = ft_lstnew(tmp->data);
		ft_lstadd_back(&lstcpy, new);
		tmp = tmp->next;
	}
	return (lstcpy);
}

int	node_value(t_list **lst, int node)
{
	int		value;
	int		position;
	t_list	*tmp;

	position = 0;
	tmp = *lst;
	while (tmp)
	{
		if (position == node)
		{
			value = tmp->data;
		}
		tmp = tmp->next;
		position ++;
	}
	return (value);
}
