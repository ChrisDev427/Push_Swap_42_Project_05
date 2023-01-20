/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:39:03 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/12 17:52:17 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->datacpy = data;
	new->init_data = data;
	new->index = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
		new->next->prev = new;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
	new->prev = tmp;
}

void	ft_lstdel_front(t_list **lst)
{
	if (!(*lst))
		return ;
	if ((*lst)->next)
	{
		free((*lst));
		*lst = (*lst)->next;
		(*lst)->prev = NULL;
	}
	else
	{
		free((*lst));
		*lst = NULL;
	}
}

void	ft_lstdel_back(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	if (tmp->next == NULL)
	{
		free(tmp);
		*lst = NULL;
	}
	else
	{
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
				tmp->next->prev = NULL;
				free(tmp->next);
				tmp->next = NULL;
			}
			tmp = tmp->next;
		}
	}
}
