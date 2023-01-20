/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:42:28 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:54:29 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdel_all(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	while (*lst)
	{
		tmp = *lst;
		free (tmp);
		*lst = (*lst)->next;
	}
}

int	ft_lstsize(t_list *lst)
{
	int	nb_element;

	nb_element = 0;
	while (lst)
	{
		nb_element++;
		lst = lst->next;
	}
	return (nb_element);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
	lst = lst->next;
	}
	return (NULL);
}

int	ft_lstfind_max(t_list **lst)
{
	t_list	*actual;
	int		tmp;
	int		i;
	int		node;

	actual = *lst;
	i = 0;
	node = 0;
	tmp = actual->data;
	while (actual)
	{
		if (actual->next != NULL && actual->next->data > tmp)
		{
			tmp = actual->next->data;
			i++;
			node = i;
		}
		else
			i++;
		actual = actual->next;
	}
	return (node);
}

int	ft_lstfind_min(t_list **lst)
{
	t_list	*actual;
	int		tmp;
	int		i;
	int		node;

	actual = *lst;
	i = 0;
	node = 0;
	tmp = actual->data;
	while (actual)
	{
		if (actual->next != NULL && actual->next->data < tmp)
		{
			tmp = actual->next->data;
			i++;
			node = i;
		}
		else
			i++;
		actual = actual->next;
	}
	return (node);
}
